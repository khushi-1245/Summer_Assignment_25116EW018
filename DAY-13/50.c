#include <stdio.h>

float average(int arr[], int n)
{
    int i, sum = 0;

    for(i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    printf("Sum = %d\n", sum);

    return (float)sum / n;
}

int main()
{
    int arr[100], n, i;
    float avg;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    avg = average(arr, n);

    printf("Average = %.2f", avg);

    return 0;
}