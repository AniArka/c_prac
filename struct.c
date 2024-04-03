#include <stdio.h>
#include <string.h>

struct student{
    char name[50];
    char major[50];
    int roll;
    char sec[2];
};

int main() {
    struct student student1;
    student1.roll = 51;
    strcpy(student1.name,"Arka");
    strcpy(student1.major,"computer");
    strcpy(student1.sec,"B");

    struct student student2;
    student1.roll = 51;
    strcpy(student2.name,"soham");
    strcpy(student2.major,"art");
    strcpy(student2.sec,"A");

    printf(student1.sec);
    return 0;
}