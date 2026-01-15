#include <stdio.h>

int main(){
    int n;
    int max;
    int min;

    printf("Enter the number of elements to be stored in array: ");
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        printf("Input %d elements in the array: ",i);
        printf("element %d: ",i);
        scanf("%d",&array[i]);
    }
    max = array[0];
    min = array[0];
    for(int i=1;i<n;i++){
        if(array[i]>max){
            max = array[i];
        }
        if(array[i]<min){
            min = array[i];
        }
    }

    printf("\nMaximum value is %d",max);
    printf("\nMinimum value is %d",min);
}