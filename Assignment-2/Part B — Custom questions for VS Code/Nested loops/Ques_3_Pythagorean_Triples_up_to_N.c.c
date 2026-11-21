#include <stdio.h>

int main()
{
    int n, a, b, c, count = 0;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    for (a = 1; a <= n; a++)
    {
        for (b = a + 1; b <= n; b++)
        {
            for (c = b + 1; c <= n; c++)
            {
                if (a * a + b * b == c * c)
                {
                    printf("%d %d %d\n", a, b, c);
                    count++;
                }
            }
        }
    }

    if (count == 0)
    {
        printf("None\n");
    }

    return 0;
}
