#include <stdio.h>

struct Bank
{
    int accNo;
    char name[50];
    float balance;
};

void createAccount(struct Bank b[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nEnter Account Number: ");
        scanf("%d", &b[i].accNo);

        printf("Enter Account Holder Name: ");
        scanf("%s", b[i].name);

        printf("Enter Balance: ");
        scanf("%f", &b[i].balance);
    }
}

void displayAccount(struct Bank b[], int n)
{
    int i;

    printf("\nBank Account Details:\n");
    printf("---------------------------------\n");

    for(i = 0; i < n; i++)
    {
        printf("Account No : %d\n", b[i].accNo);
        printf("Name       : %s\n", b[i].name);
        printf("Balance    : %.2f\n", b[i].balance);
        printf("---------------------------------\n");
    }
}

int main()
{
    struct Bank b[100];
    int n;

    printf("Enter Number of Accounts: ");
    scanf("%d", &n);

    createAccount(b, n);
    displayAccount(b, n);

    return 0;
}