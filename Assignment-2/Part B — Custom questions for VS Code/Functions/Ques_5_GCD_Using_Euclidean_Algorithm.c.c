#include <stdio.h>

int gcd(int a, int b)
{
    int remainder;

    while (b != 0)
    {
        remainder = a % b;
        a = b;
        b = remainder;
    }

    return a;
}

int main()
{
    int a, b, result;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    result = gcd(a, b);

    printf("The GCD is: %d\n", result);

    return 0;
}