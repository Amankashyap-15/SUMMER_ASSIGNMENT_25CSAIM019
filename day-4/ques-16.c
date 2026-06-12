#include <stdio.h>
#include <math.h>

int main() {
    int a, b, num, temp, digit, count;
    int sum;

    printf("Enter starting number: ");
    scanf("%d", &a);

    printf("Enter ending number: ");
    scanf("%d", &b);

    printf("Armstrong numbers between %d and %d are:\n", a, b);

    for (num = a; num <= b; num++) {
        temp = num;
        count = 0;

        while (temp != 0) {
            count++;
            temp /= 10;
        }

        temp = num;
        sum = 0;

        while (temp != 0) {
            digit = temp % 10;
            sum += pow(digit, count);
            temp /= 10;
        }

        if (sum == num)
            printf("%d ", num);
    }

    return 0;
}