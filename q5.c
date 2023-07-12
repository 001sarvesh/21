// 5. Write a function to sort employees according to their salaries [ refer structure from
// question 1]

#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

void sortEmployeesBySalary(struct Employee* employees, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (employees[j].salary > employees[j + 1].salary) {
                // Swap the employees
                struct Employee temp = employees[j];
                employees[j] = employees[j + 1];
                employees[j + 1] = temp;
            }
        }
    }
}

int main() {
    struct Employee employees[5];

    // Assume employees array has been initialized with data for 5 employees

    // Before sorting
    printf("Employees before sorting by salary:\n");
    for (int i = 0; i < 5; i++) {
        printf("Employee ID: %d, Name: %s, Salary: %.2f\n", employees[i].id, employees[i].name, employees[i].salary);
    }

    // Sort employees by salary
    sortEmployeesBySalary(employees, 5);

    // After sorting
    printf("\nEmployees after sorting by salary:\n");
    for (int i = 0; i < 5; i++) {
        printf("Employee ID: %d, Name: %s, Salary: %.2f\n", employees[i].id, employees[i].name, employees[i].salary);
    }

    return 0;
}
