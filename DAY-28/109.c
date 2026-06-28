#include <stdio.h>

struct Book
{
    int id;
    char name[50];
    char author[50];
};

void addBook(struct Book b[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nEnter Book ID: ");
        scanf("%d", &b[i].id);

        printf("Enter Book Name: ");
        scanf("%s", b[i].name);

        printf("Enter Author Name: ");
        scanf("%s", b[i].author);
    }
}

void displayBook(struct Book b[], int n)
{
    int i;

    printf("\nLibrary Records:\n");
    printf("---------------------------------\n");

    for(i = 0; i < n; i++)
    {
        printf("Book ID     : %d\n", b[i].id);
        printf("Book Name   : %s\n", b[i].name);
        printf("Author Name : %s\n", b[i].author);
        printf("---------------------------------\n");
    }
}

int main()
{
    struct Book b[100];
    int n;

    printf("Enter Number of Books: ");
    scanf("%d", &n);

    addBook(b, n);
    displayBook(b, n);

    return 0;
}