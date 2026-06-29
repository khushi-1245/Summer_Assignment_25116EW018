#include <stdio.h>

struct Item
{
    int id;
    char name[50];
    int quantity;
    float price;
};

void addItem(struct Item item[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nEnter Item ID: ");
        scanf("%d", &item[i].id);

        printf("Enter Item Name: ");
        scanf("%s", item[i].name);

        printf("Enter Quantity: ");
        scanf("%d", &item[i].quantity);

        printf("Enter Price: ");
        scanf("%f", &item[i].price);
    }
}

void displayItem(struct Item item[], int n)
{
    int i;

    printf("\nInventory Details:\n");
    printf("--------------------------------------\n");

    for(i = 0; i < n; i++)
    {
        printf("Item ID   : %d\n", item[i].id);
        printf("Item Name : %s\n", item[i].name);
        printf("Quantity  : %d\n", item[i].quantity);
        printf("Price     : %.2f\n", item[i].price);
        printf("--------------------------------------\n");
    }
}

int main()
{
    struct Item item[100];
    int n;

    printf("Enter Number of Items: ");
    scanf("%d", &n);

    addItem(item, n);
    displayItem(item, n);

    return 0;
}