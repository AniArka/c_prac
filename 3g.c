#include "stdio.h"
int main(){
    char c = 'A';
    for (int i = 0; i < 4; ++i) {
        for(int j = 0; j<=i;j++){
            printf("%c",c);
        }
        c++;
        printf("\n");
    }
}