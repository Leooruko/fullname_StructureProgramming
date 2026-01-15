#include <stdio.h>

int main(){
    int n;
    int sum = 0;

    printf("Input the number of elements to be stored in array: ");

    scanf("%d",&n);
    int array[n];
    
    printf("Input %d elements in the array:",n);    
    
    for(int i=0;i<n;i++){
        printf("element %d: ",i);
        scanf("%d",&array[i]);

    }

    for(int i=0;i<n;i++){
        sum += array[i];
    }

    printf("sum = %d",sum);
    
    return 0;
}