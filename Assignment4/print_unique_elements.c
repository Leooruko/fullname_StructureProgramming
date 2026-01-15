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
    printf("The unique elements are: \n");
    for(int i=0;i<n;i++){   
        count = 0;     
        for(int j=0;j<n;j++){
            if (array[j]==array[i]){
                count++;
            }
        }
        
        if(count==1){
            printf("%d ",array[i]);
        }
    }
    return 0;
}