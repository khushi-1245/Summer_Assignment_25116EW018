#include <stdio.h>

int main()
{
    int a[] = {10, 20, 30, 40, 50};
    int b[] = {30, 40, 50, 60, 70};
    int i, j;

    printf("Common elements are: ");

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