#include <stdio.h>

int main(){
    int arr[10] = {0};
    int index = 0;

    while (1){
        printf("\nEnter sensor value: ");
        scanf("%d",&arr[index]);

        printf("Buffer Contents: \n");
        for (int i = 0; i < 10; i++) {
            printf("%d ", arr[i]);
        }

        index = (index + 1) % 10;
    }
    return 0;
}