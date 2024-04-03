#include "stdio.h"
#include "limits.h"
int main(){
    int arr[5] = {5,4,3,2,1};
    int n = 5;
    for (int i = 0; i < n-1; ++i) {
        int min = INT_MAX;
        int mindex = -1;
        for (int j = i; j <= n-1; ++j) {
            if (min > arr[j]){
                min = arr[j];
                mindex = j;
            }
        }
        int temp = arr[mindex];
        arr[mindex]=arr[i];
        arr[i]=temp;
    }
    for (int k = 0; k < n; ++k) {
        printf("%d",arr[k]);
    }
}