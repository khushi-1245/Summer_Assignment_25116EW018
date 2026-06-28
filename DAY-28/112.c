#include <stdio.h>

struct Contact
{
    char name[50];
    char phone[15];
};

void addContact(struct Contact c[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nEnter Name: ");
        scanf("%s", c[i].name);

        printf("Enter Phone Number: ");
        scanf("%s", c[i].phone);
    }
}

void displayContact(struct Contact c[], int n)
{
    int i;

    printf("\nContact List:\n");
    printf("---------------------------\n");

    for(i = 0; i < n; i++)
    {
        printf("Name         : %s\n", c[i].name);
        printf("Phone Number : %s\n", c[i].phone);
        printf("---------------------------\n");
    }
}

int main()
{
    struct Contact c[100];
    int n;

    printf("Enter Number of Contacts: ");
    scanf("%d", &n);

    addContact(c, n);
    displayContact(c, n);

    return 0;
}