#include "stdio.h"
int main(){
    char c = 'A';
    for (int i = 0; i < 5; ++i) {
        for (int j = 5; j >i ; --j) {
            printf("%c",c);
            c++;
        }

        printf("\n");
    }
}