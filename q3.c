// 3. Write a function to display employee data. [ Refer structure from question 1 ]

#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

void displayEmployeeData(const struct Employee* emp) {
    printf("Employee ID: %d\n", emp->id);
    printf("Employee Name: %s\n", emp->name);
    printf("Employee Salary: %.2f\n", emp->salary);
}

int main() {
    struct Employee emp;

    // Assume emp structure has been initialized with data

    displayEmployeeData(&emp);

    return 0;
}
