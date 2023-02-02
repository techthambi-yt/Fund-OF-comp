#include <stdio.h>

int binaryProduct(int a, int b)
{
    int i = 0;
    int rem = 0;
    int product = 0;
    int sum[20] = { 0 };

    while (a != 0 || b != 0) {

        sum[i] = (a % 10 + b % 10 + rem) % 2;
        rem = (a % 10 + b % 10 + rem) / 2;

        a = a / 10;
        b = b / 10;

        i = i + 1;
    }

    if (rem != 0)
        sum[i] = rem;

    while (i >= 0) {
        product = product * 10 + sum[i];
        i = i - 1;
    }

    return product;
}

int main()
{
    long a = 0;
    long b = 0;
    long product = 0;

    int digit = 0;
    int factor = 1;

    printf("Enter Number1: ");
    scanf("%ld", &a);

    printf("Enter Number2: ");
    scanf("%ld", &b);

    while (b != 0) {
        digit = b % 10;

        if (digit == 1) {
            a = a * factor;
            product = binaryProduct(a, product);
        }
        else {
            a = a * factor;
        }

        b = b / 10;
        factor = 10;
    }

    printf("Product of numbers: %ld", product);

    return 0;
}
