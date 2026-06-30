#include <stdio.h>

struct Library
{
    int bookId;
    char bookName[50];
    char author[50];
    int quantity;
};

int main()
{
    struct Library b;
    int choice;

    printf("Mini Library System");
    printf("\n1. Add Book");
    printf("\n2. Display Book");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("\nEnter Book ID: ");
            scanf("%d", &b.bookId);

            printf("Enter Book Name: ");
            scanf("%s", b.bookName);

            printf("Enter Author Name: ");
            scanf("%s", b.author);

            printf("Enter Quantity: ");
            scanf("%d", &b.quantity);

            printf("\nBook Added Successfully!");
            break;

        case 2:
            printf("\nNo Book Record Available!");
            break;

        default:
            printf("\nInvalid Choice");
    }

    return 0;
}