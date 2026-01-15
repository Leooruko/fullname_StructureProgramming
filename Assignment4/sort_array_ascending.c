#include <stdio.h>

int main(){
    int n,count;

    printf("Enter the number of elements to be stored in array: ");
    scanf("%d",&n);
    int array[n];

    for(int i=0;i<n;i++){
        printf("Input %d elements in the array: ",i);
        printf("element %d: ",i);
        scanf("%d",&array[i]);
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(array[i]<array[j]){
                int x = array[i];
                array[i] = array[j];
                array[j] = x;                
            }
        }
    }
    printf("Array elements in ascending order: \n");
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
}