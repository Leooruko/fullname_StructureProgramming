#include <stdio.h>

int main(){
    int num = 10;
    int *ptr;
    ptr = &num;

    printf("Value of num stored in ptr is %d \n",*ptr);
    printf("Address of num in the pointer ptr = %p \n",(void *)ptr);

    return 0;
}



