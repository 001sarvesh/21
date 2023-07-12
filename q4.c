// 4. Write a function to find the highest salary employee from a given array of 10
// employees. [ Refer structure from question 1]

#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

struct Employee findHighestSalaryEmployee(const struct Employee* employees, int size) {
    struct Employee highestSalaryEmployee = employees[0];

    for (int i = 1; i < size; i++) {
        if (employees[i].salary > highestSalaryEmployee.salary) {
            highestSalaryEmployee = employees[i];
        }
    }

    return highestSalaryEmployee;
}

int main() {
    struct Employee employees[10];

    // Assume employees array has been initialized with data for 10 employees

    struct Employee highestSalaryEmp = findHighestSalaryEmployee(employees, 10);

    printf("Employee with the highest salary:\n");
    printf("Employee ID: %d\n", highestSalaryEmp.id);
    printf("Employee Name: %s\n", highestSalaryEmp.name);
    printf("Employee Salary: %.2f\n", highestSalaryEmp.salary);

    return 0;
}
