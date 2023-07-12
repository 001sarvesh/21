//2. Write a function to take input employee data from the user. [ Refer structure from
// question 1 ]

#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

void inputEmployeeData(struct Employee* emp) {
    printf("Enter Employee ID: ");
    scanf("%d", &(emp->id));
    
    printf("Enter Employee Name: ");
    scanf("%s", emp->name);
    
    printf("Enter Employee Salary: ");
    scanf("%f", &(emp->salary));
}

int main() {
    struct Employee emp;

    inputEmployeeData(&emp);

    printf("Employee ID: %d\n", emp.id);
    printf("Employee Name: %s\n", emp.name);
    printf("Employee Salary: %.2f\n", emp.salary);

    return 0;
}
