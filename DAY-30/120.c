#include <stdio.h>
#include <string.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

struct Student s[100];
int n = 0;

void addStudent()
{
    printf("\nEnter Roll Number: ");
    scanf("%d", &s[n].roll);

    printf("Enter Name: ");
    scanf("%s", s[n].name);

    printf("Enter Marks: ");
    scanf("%f", &s[n].marks);

    n++;
    printf("\nStudent Added Successfully!\n");
}

void displayStudent()
{
    int i;

    if(n == 0)
    {
        printf("\nNo Records Found!\n");
        return;
    }

    printf("\nStudent Records\n");
    printf("-------------------------------------\n");

    for(i = 0; i < n; i++)
    {
        printf("Roll No : %d\n", s[i].roll);
        printf("Name    : %s\n", s[i].name);
        printf("Marks   : %.2f\n", s[i].marks);
        printf("-------------------------------------\n");
    }
}

void searchStudent()
{
    int roll, i, found = 0;

    printf("Enter Roll Number to Search: ");
    scanf("%d", &roll);

    for(i = 0; i < n; i++)
    {
        if(s[i].roll == roll)
        {
            printf("\nRecord Found\n");
            printf("Roll No : %d\n", s[i].roll);
            printf("Name    : %s\n", s[i].name);
            printf("Marks   : %.2f\n", s[i].marks);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Record Not Found!\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n===== Student Record System =====");
        printf("\n1. Add Student");
        printf("\n2. Display Students");
        printf("\n3. Search Student");
        printf("\n4. Exit");

        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudent();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                printf("Thank You!");
                break;

            default:
                printf("Invalid Choice!");
        }

    } while(choice != 4);

    return 0;
}