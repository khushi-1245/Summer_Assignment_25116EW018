#include <stdio.h>

struct Student
{
    int roll;
    char name;
    float marks;
};

int main()
{
    struct Student s;

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);

    printf("Enter First Letter of Name: ");
    scanf(" %c", &s.name);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    printf("\nStudent Record\n");
    printf("---------------------\n");
    printf("Roll Number : %d\n", s.roll);
    printf("Name        : %c\n", s.name);
    printf("Marks       : %.2f\n", s.marks);

    return 0;
}