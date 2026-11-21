#include <stdio.h>

int evaluateFunction(int x)
{
    int result;

    if (x < 0)
    {
        result = x * x + 2 * x + 1;
    }
    else if (x >= 0 && x < 10)
    {
        result = 3 * x + 2;
    }
    else
    {
        result = 5 * x - 7;
    }

    return result;
}

int main()
{
    int x, result;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    result = evaluateFunction(x);

    printf("The value of f(x) is: %d\n", result);

    return 0;
}