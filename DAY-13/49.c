#include <stdio.h>

void inputArray(int arr[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void displayArray(int arr[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    inputArray(arr, n);

    printf("Array elements are: ");
    displayArray(arr, n);

    return 0;
}