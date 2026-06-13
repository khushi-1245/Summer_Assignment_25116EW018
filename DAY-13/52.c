#include <stdio.h>

void countEvenOdd(int arr[], int n)
{
    int i, even = 0, odd = 0;

    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Number of Even Elements = %d\n", even);
    printf("Number of Odd Elements = %d\n", odd);
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

    countEvenOdd(arr, n);

    return 0;
}