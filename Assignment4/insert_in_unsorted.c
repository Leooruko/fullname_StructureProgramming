#include <stdio.h>

int main(){
    int n,count, n_value,pos;
    int array[100];

    printf("Enter the number of elements to be stored in array: ");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        printf("Input %d elements in the array: ",i);
        printf("element %d: ",i);
        scanf("%d",&array[i]);
    }

    printf("Input the value to be inserted: ");
    scanf("%d",&n_value);
    printf("Input the position, where the value is to be inserted: ");
    scanf("%d",&pos);
    pos -=1;

    for(int i=0;i<n;i++){
        if (pos == i){
            int x = array[i];
            array[i] = n_value;
            for(int j = i+1;j<n;j++){
                int y = array[j];
                array[j] = x;
                x = y;
            }

        }
    }

    array[pos] = n_value;
    printf("After inserting the element the new list is: ");
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }

}