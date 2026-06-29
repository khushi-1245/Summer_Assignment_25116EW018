#include <stdio.h>

float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiply(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    if(b == 0)
    {
        printf("Division by zero is not possible.\n");
        return 0;
    }
    return a / b;
}

int main()
{
    float num1, num2;
    int choice;

    printf("Menu\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch(choice)
    {
        case 1:
            printf("Result = %.2f", add(num1, num2));
            break;

        case 2:
            printf("Result = %.2f", subtract(num1, num2));
            break;

        case 3:
            printf("Result = %.2f", multiply(num1, num2));
            break;

        case 4:
            printf("Result = %.2f", divide(num1, num2));
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}