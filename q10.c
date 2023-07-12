// 10. Write a program to enter the marks of 5 students in Chemistry, Mathematics and
// Physics (each out of 100) using a structure named Marks having elements roll no.,
// name, chem_marks, maths_marks and phy_marks and then display the percentage
// of each student


#include <stdio.h>

struct Marks {
    int rollNumber;
    char name[50];
    int chemMarks;
    int mathsMarks;
    int phyMarks;
};

int main() {
    struct Marks students[5];

    printf("Enter the marks of 5 students:\n");

    // Input marks of each student
    for (int i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        printf("Enter roll number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Enter name: ");
        scanf("%s", students[i].name);
        printf("Enter Chemistry marks (out of 100): ");
        scanf("%d", &students[i].chemMarks);
        printf("Enter Mathematics marks (out of 100): ");
        scanf("%d", &students[i].mathsMarks);
        printf("Enter Physics marks (out of 100): ");
        scanf("%d", &students[i].phyMarks);
        printf("\n");
    }

    printf("Percentage of each student:\n");

    // Calculate and display the percentage of each student
    for (int i = 0; i < 5; i++) {
        float totalMarks = students[i].chemMarks + students[i].mathsMarks + students[i].phyMarks;
        float percentage = (totalMarks / 300) * 100;

        printf("Student %d:\n", i + 1);
        printf("Roll number: %d\n", students[i].rollNumber);
        printf("Name: %s\n", students[i].name);
        printf("Percentage: %.2f%%\n", percentage);
        printf("\n");
    }

    return 0;
}
