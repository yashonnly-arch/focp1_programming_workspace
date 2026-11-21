#include <stdio.h>

int isPerfectSquare(int n)
{
    int i;

    if (n < 0)
    {
        return 0;
    }

    for (i = 0; i <= n / i && i * i <= n; i++)
    {
        if (i * i == n)
        {
            return 1;
        }
    }

    return 0;
}

int main()
{
    int n, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    result = isPerfectSquare(n);

    printf("%d\n", result);

    return 0;
}