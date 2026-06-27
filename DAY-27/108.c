#include <stdio.h>

int main()
{
    char name[50];
    int roll;
    float m1, m2, m3, m4, m5;
    float total, percentage;

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("Enter marks of Subject 1: ");
    scanf("%f", &m1);

    printf("Enter marks of Subject 2: ");
    scanf("%f", &m2);

    printf("Enter marks of Subject 3: ");
    scanf("%f", &m3);

    printf("Enter marks of Subject 4: ");
    scanf("%f", &m4);

    printf("Enter marks of Subject 5: ");
    scanf("%f", &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;

    printf("\n----- Marksheet -----\n");
    printf("Name: %s\n", name);
    printf("Roll Number: %d\n", roll);
    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    if (percentage >= 60)
        printf("Division: First Division");
    else if (percentage >= 45)
        printf("Division: Second Division");
    else if (percentage >= 33)
        printf("Division: Third Division");
    else
        printf("Result: Fail");

    return 0;
}