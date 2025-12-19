#include <stdio.h>

int main(){
    
    int num1=10,num2=12;
    int *ptr1,*ptr2;

    ptr1 = &num1;
    ptr2 = &num2;

    int sum = (*ptr1)+(*ptr2);

    printf("Value of num1 and num2 added using pointer dereferencing = %d",sum);

    return 0;
}