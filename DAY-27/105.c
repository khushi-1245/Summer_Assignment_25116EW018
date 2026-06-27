#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[100];
    int count = 0;
    int choice, i, roll, found;

    while (1) {
        printf("\n--- Student Record Management ---\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter Roll No: ");
            scanf("%d", &s[count].roll);

            printf("Enter Name: ");
            scanf("%s", s[count].name);

            printf("Enter Marks: ");
            scanf("%f", &s[count].marks);

            count++;
            printf("Student Added Successfully!\n");
        }

        else if (choice == 2) {
            if (count == 0) {
                printf("No records found!\n");
            } else {
                printf("\nStudent Records:\n");
                for (i = 0; i < count; i++) {
                    printf("Roll: %d\n", s[i].roll);
                    printf("Name: %s\n", s[i].name);
                    printf("Marks: %.2f\n", s[i].marks);
                    printf("-------------------\n");
                }
            }
        }

        else if (choice == 3) {
            printf("Enter Roll No to search: ");
            scanf("%d", &roll);

            found = 0;
            for (i = 0; i < count; i++) {
                if (s[i].roll == roll) {
                    printf("Student Found!\n");
                    printf("Name: %s\n", s[i].name);
                    printf("Marks: %.2f\n", s[i].marks);
                    found = 1;
                    break;
                }
            }

            if (found == 0) {
                printf("Student not found!\n");
            }
        }

        else if (choice == 4) {
            printf("Exiting...");
            break;
        }

        else {
            printf("Invalid Choice!\n");
        }
    }

    return 0;
}