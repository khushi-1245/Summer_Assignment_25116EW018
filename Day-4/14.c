#include <stdio.h>

int main() {
    int n, i;
    long long first = 0, second = 1, next;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n == 0)
        printf("The 0th Fibonacci number is %lld", first);
    else if (n == 1)
        printf("The 1st Fibonacci number is %lld", second);
    else {
        for (i = 2; i <= n; i++) {
            next = first + second;
            first = second;
            second = next;
        }
        printf("The %dth Fibonacci number is %lld", n, second);
    }

    return 0;
}