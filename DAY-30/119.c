#include <stdio.h>

struct Employee
{
    int empId;
    char name[50];
    char department[50];
    float salary;
};

int main()
{
    struct Employee e;
    int choice;

    printf("Mini Employee Management System");
    printf("\n1. Add Employee");
    printf("\n2. Display Employee");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("\nEnter Employee ID: ");
            scanf("%d", &e.empId);

            printf("Enter Employee Name: ");
            scanf("%s", e.name);

            printf("Enter Department: ");
            scanf("%s", e.department);

            printf("Enter Salary: ");
            scanf("%f", &e.salary);

            printf("\nEmployee Added Successfully!");
            break;

        case 2:
            printf("\nNo Employee Record Available!");
            break;

        default:
            printf("\nInvalid Choice");
    }

    return 0;
}