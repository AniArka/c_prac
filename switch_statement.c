#include <stdio.h>

int main() {
    int grade;
    printf("enter grade");
    scanf("%d",& grade);
//    printf("%s", &grade);
    switch (grade) {
        case 1:
            printf("pass");
            break;
        case 'f':
            printf("fail");
            break;
        default:
            printf("enter valid info");
            break;

    }
}
