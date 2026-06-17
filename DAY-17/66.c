#include <stdio.h>

int main()
{
    int a[] = {1, 2, 3, 4};
    int b[] = {3, 4, 5, 6};
    int c[20];
    int n1 = 4, n2 = 4;
    int i, j, k = 0, found;

    for(i = 0; i < n1; i++)
        c[k++] = a[i];

    for(i = 0; i < n2; i++)
    {
        found = 0;

        for(j = 0; j < k; j++)
        {
            if(b[i] == c[j])
            {
                found = 1;
                break;
            }
        }

        if(found == 0)
            c[k++] = b[i];
    }

    for(i = 0; i < k; i++)
        printf("%d ", c[i]);

    return 0;
}