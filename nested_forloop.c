#include <stdio.h>

int main() {
    int arr[3][2] = {
            {1,2,},
            {56, 25},
            {47,23},
    };
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("%d,",arr[i][j]);
        }
        printf("\n");
    }
}