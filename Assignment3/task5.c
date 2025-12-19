#include <stdio.h>

void swapNumbers(int *a,int *b){
    int c = *a;
    *a = *b;
    *b = c;
}
int main(){
    int a=10,b=12;
    
    swapNumbers(&a,&b);
    printf("The values of a and b after swapping are : a = %d and b = %d",a,b);
}
