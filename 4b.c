#include "stdio.h"
#define row 3
#define column 3
int main(){
    int arr[row][column];
    int n;
    printf("enter %d integers for a %d x %d array: \n", row*column,row,column);
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("elements are: \n");
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
}