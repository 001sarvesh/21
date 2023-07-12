// 1. Define a structure Employee with member variables id, name, salary

#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    // Declare an instance of the Employee structure
    struct Employee emp;

    // Assign values to the member variables
    emp.id = 1;
    strcpy(emp.name, "John Doe");
    emp.salary = 5000.0;

    // Print the values of the member variables
    printf("Employee ID: %d\n", emp.id);
    printf("Employee Name: %s\n", emp.name);
    printf("Employee Salary: %.2f\n", emp.salary);

    return 0;
}
