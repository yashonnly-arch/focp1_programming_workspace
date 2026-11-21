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

int countRelativelyPrime(int n, int m)
{
    int i, count = 0;

    for (i = 1; i <= m; i++)
    {
        if (gcd(i, n) == 1)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int n, m, result;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter the value of m: ");
    scanf("%d", &m);

    result = countRelativelyPrime(n, m);

    printf("The count of relatively prime values is: %d\n", result);

    return 0;
}