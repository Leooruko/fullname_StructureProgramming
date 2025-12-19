#include <stdio.h>

void incrementPassByVal(int a){
    a++;
}

void incrementPassByRef(int *a){
    (*a)++;
}

int main(){
    int a = 10;
    int *ptr = &a;
    incrementPassByVal(a);    
    printf(" Value after increment using pass by value = %d \n",a);
    incrementPassByRef(&a);
    printf(" Value after increment using pass by reference = %d",a);
}