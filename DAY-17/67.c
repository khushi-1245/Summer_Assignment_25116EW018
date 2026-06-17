#include <stdio.h>

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {3, 4, 5, 6, 7};
    int i, j;

    printf("Intersection of arrays: ");

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            if(a[i] == b[j])
            {
                printf("%d ", a[i]);
                break;
            }
        }
    }

    return 0;
}