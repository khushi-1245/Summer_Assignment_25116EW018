#include <stdio.h>

int main() {
    int n, i = 0, rem;
    int binary[32];

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Binary: 0");
        return 0;
    }

    while (n > 0) {
        rem = n % 2;
        binary[i] = rem;
        n = n / 2;
        i++;
    }

    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    return 0;
}