#include <stdio.h>

struct Ticket
{
    int ticketNo;
    char name[50];
    char destination[50];
};

void bookTicket(struct Ticket t[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nEnter Ticket Number: ");
        scanf("%d", &t[i].ticketNo);

        printf("Enter Passenger Name: ");
        scanf("%s", t[i].name);

        printf("Enter Destination: ");
        scanf("%s", t[i].destination);
    }
}

void displayTicket(struct Ticket t[], int n)
{
    int i;

    printf("\nTicket Details:\n");
    printf("---------------------------------\n");

    for(i = 0; i < n; i++)
    {
        printf("Ticket No   : %d\n", t[i].ticketNo);
        printf("Name        : %s\n", t[i].name);
        printf("Destination : %s\n", t[i].destination);
        printf("---------------------------------\n");
    }
}

int main()
{
    struct Ticket t[100];
    int n;

    printf("Enter Number of Tickets: ");
    scanf("%d", &n);

    bookTicket(t, n);
    displayTicket(t, n);

    return 0;
}