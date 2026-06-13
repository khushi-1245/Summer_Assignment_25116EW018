#include <stdio.h>

void findLargestSmallest(int arr[], int n)
{
    int i, largest, smallest;

    largest = smallest = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] > largest)
            largest = arr[i];

        if(arr[i] < smallest)
            smallest = arr[i];
    }

    printf("Largest element = %d\n", largest);
    printf("Smallest element = %d", smallest);
}

int main()
{
    int arr[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    findLargestSmallest(arr, n);

    return 0;
}