#include "stdio.h"
int main(){
    int n;
    printf("enter value of n: ");
    scanf("%d",&n);
    printf("\n");
    for (int i = 0; i < n; ++i) {
        for (int j = (n-1); j > i; --j) {
            printf(" ");
        }
        for (int k = 1; k <=(2*i)+1 ; k++) {
            printf("*");
        }
        printf("\n");
    }
}