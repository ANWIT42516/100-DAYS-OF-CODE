#include <stdio.h>

int main()
{
    int a, b, sum, diff, product, quotient;
    printf("enter two numbers:");
    scanf("%d %d", &a, &b);
    sum = a + b;
    diff = a - b;
    product = a * b;
    quotient = a / b;
    printf("sum = %d\n", sum);
    printf("difference = %d\n", diff);
    printf("product = %d\n", product);
    printf("quotient = %d\n", quotient);

    return 0;
}