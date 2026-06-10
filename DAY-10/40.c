#include <stdio.h>

int main() {
    int i, j, k, n = 5;
    char ch;

    for (i = 1; i <= n; i++) {

        for (j = i; j < n; j++) {
            printf(" ");
        }

        ch = 'A';

        for (k = 1; k <= i; k++) {
            printf("%c", ch++);
        }

        ch = ch - 2;

        for (k = 1; k < i; k++) {
            printf("%c", ch--);
        }

        printf("\n");
    }

    return 0;
}