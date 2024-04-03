#include <stdio.h>

//int main() {
//    int i = 1;
//    while (i<=5){
//        printf("%d", i);
//        i++; // if i remove this line it will become infinite loop
//    }

// DO While loop

int main(){
    int i = 6;
    do {
        printf("%d\n",i);  //in do while this line will exicute before checking condition
        i++;
    } while (i<5);
}