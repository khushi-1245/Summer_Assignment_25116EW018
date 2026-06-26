#include <stdio.h>

int main()
{
    int choice, score = 0;

    printf("===== QUIZ APPLICATION =====\n\n");

    printf("Q1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &choice);

    if(choice == 2)
        score++;

    printf("\nQ2. Which language is used for C programming?\n");
    printf("1. Python\n2. Java\n3. C\n4. HTML\n");
    printf("Enter your answer: ");
    scanf("%d", &choice);

    if(choice == 3)
        score++;

    printf("\nQ3. How many days are there in a leap year?\n");
    printf("1. 365\n2. 366\n3. 364\n4. 360\n");
    printf("Enter your answer: ");
    scanf("%d", &choice);

    if(choice == 2)
        score++;

    printf("\nQ4. Which planet is known as the Red Planet?\n");
    printf("1. Venus\n2. Mars\n3. Jupiter\n4. Mercury\n");
    printf("Enter your answer: ");
    scanf("%d", &choice);

    if(choice == 2)
        score++;

    printf("\nQ5. What is 10 + 20?\n");
    printf("1. 20\n2. 25\n3. 30\n4. 40\n");
    printf("Enter your answer: ");
    scanf("%d", &choice);

    if(choice == 3)
        score++;

    printf("\n===== RESULT =====\n");
    printf("Your Score = %d/5\n", score);

    if(score == 5)
        printf("Excellent!\n");
    else if(score >= 3)
        printf("Good Job!\n");
    else
        printf("Better Luck Next Time!\n");

    return 0;
}