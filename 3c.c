#include "stdio.h"
int main(){
    for (int i = 0; i <= 4; ++i) {
        for (int j = 4; j >i; --j) {
            printf("*");
        }
        printf("\n");
    }
}