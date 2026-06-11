#include <stdio.h>

int main() {
    int a, b, i, j, isPrime;

    printf("Enter the starting number: ");
    scanf("%d", &a);

    printf("Enter the ending number: ");
    scanf("%d", &b);

    printf("Prime numbers between %d and %d are:\n", a, b);

    for (i = a; i <= b; i++) {
        if (i < 2)
            continue;

        isPrime = 1;

        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
            printf("%d ", i);
    }

    return 0;
}