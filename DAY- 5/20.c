#include <stdio.h>

int main() {
    int n, i;

    scanf("%d", &n);

    while (n % 2 == 0) {
        n = n / 2;
    }

    for (i = 3; i * i <= n; i = i + 2) {
        while (n % i == 0) {
            n = n / i;
        }
    }

    if (n > 2) {
        printf("%d", n);
    }
 
    return 0;
}