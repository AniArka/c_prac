#include "stdio.h"
int swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a = 2;
    int b = 3;
    swap(&a,&b);  // we need to provide the memory adress of a,b so that the *a,*b can catch it[ex: pointer.c]
    printf("value of a %d \n",a);
    printf("value of %d",b);
    return 0;
}