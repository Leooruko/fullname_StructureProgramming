#include <stdio.h>

int main(){
    int count = 10;
    int *pCount;
    pCount = &count;

    (*pCount)++;

    printf("Modified value of count using pointer  = %d",*pCount);
}