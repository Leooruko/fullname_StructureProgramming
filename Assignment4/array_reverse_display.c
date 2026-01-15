#include <stdio.h>


int main(){
    int n;
    printf("Enter the number of elements to store in array: ");
    scanf("%d",&n);
    int array[n]; 
    printf("Input %d number of elements in the array: \n",n);
    for(int i=0;i<n;i++){
        printf("Element %d: ",i);
        scanf("%d",&array[i]);
    }
    printf("The values store into the array are: ");
    for (int i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
    printf("\nThe values store into the array in reverse are: ");
    for (int i = n; i > 0; i--){
        printf("%d ", array[i-1]);
    }
    return 0;
}