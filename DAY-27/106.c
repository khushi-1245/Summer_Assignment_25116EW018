#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee e[100];
    int choice, count = 0, i, searchId, found;

    do {
        printf("\n--- Employee Management System ---\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter Employee ID: ");
            scanf("%d", &e[count].id);

            printf("Enter Employee Name: ");
            scanf("%s", e[count].name);

            printf("Enter Employee Salary: ");
            scanf("%f", &e[count].salary);

            count++;
        }

        else if (choice == 2) {
            if (count == 0) {
                printf("No employee records found.\n");
            } else {
                printf("\nEmployee Records:\n");
                for (i = 0; i < count; i++) {
                    printf("ID: %d  Name: %s  Salary: %.2f\n",
                           e[i].id, e[i].name, e[i].salary);
                }
            }
        }

        else if (choice == 3) {
            printf("Enter Employee ID to search: ");
            scanf("%d", &searchId);

            found = 0;
            for (i = 0; i < count; i++) {
                if (e[i].id == searchId) {
                    printf("Employee Found!\n");
                    printf("ID: %d\n", e[i].id);
                    printf("Name: %s\n", e[i].name);
                    printf("Salary: %.2f\n", e[i].salary);
                    found = 1;
                    break;
                }
            }

            if (found == 0) {
                printf("Employee not found.\n");
            }
        }

        else if (choice == 4) {
            printf("Exiting...\n");
        }

        else {
            printf("Invalid choice!\n");
        }

    } while (choice != 4);

    return 0;
}