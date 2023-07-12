// 8. Write a program to store information of 10 students and display them using structure.

#include <stdio.h>

struct Student {
    int rollNumber;
    char name[50];
    int age;
};

int main() {
    struct Student students[10];

    printf("Enter information of 10 students:\n");

    // Input student information
    for (int i = 0; i < 10; i++) {
        printf("Student %d:\n", i + 1);
        printf("Enter roll number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Enter name: ");
        scanf("%s", students[i].name);
        printf("Enter age: ");
        scanf("%d", &students[i].age);
        printf("\n");
    }

    printf("Student information:\n");

    // Display student information
    for (int i = 0; i < 10; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll number: %d\n", students[i].rollNumber);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("\n");
    }

    return 0;
}
