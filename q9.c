// 9. Write a program to store information of n students and display them using structure
#include <stdio.h>

struct Student {
    int rollNumber;
    char name[50];
    int age;
};

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    printf("Enter information of %d students:\n", n);

    // Input student information
    for (int i = 0; i < n; i++) {
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
    for (int i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll number: %d\n", students[i].rollNumber);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("\n");
    }

    return 0;
}
