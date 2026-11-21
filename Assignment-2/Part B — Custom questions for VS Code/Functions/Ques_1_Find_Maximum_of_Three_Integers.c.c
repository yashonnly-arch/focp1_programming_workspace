#include <stdio.h>

int maxOfThree(int a, int b, int c)
{
    int max = a;

    if (b > max)
    {
        max = b;
    }

    if (c > max)
    {
        max = c;
    }

    return max;
}

int main()
{
    int a, b, c, result;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("Enter the third number: ");
    scanf("%d", &c);

    result = maxOfThree(a, b, c);

    printf("The biggest number is: %d\n", result);

    return 0;
}