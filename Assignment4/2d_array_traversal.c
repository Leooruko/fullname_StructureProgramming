#include <stdio.h>

int main() {
    int arr[6][4] = {
        {1, 2, 3, 4},
        {2, 34, 2, 89},
        {1, 2, 3, 4},
        {2, 34, 2, 89},
        {1, 2, 3, 4},
        {2, 34, 2, 89}
    };

    printf("Array elements are:\n");

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n"); 
    }

    return 0;
}
