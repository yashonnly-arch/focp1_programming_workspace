#include <stdio.h>

int main()
{
    int r, c, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &r);

    printf("Enter the number of columns: ");
    scanf("%d", &c);

    int arr[r][c];

    printf("Enter the matrix elements:\n");

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Row sums:\n");

    for (i = 0; i < r; i++)
    {
        int sum = 0;

        for (j = 0; j < c; j++)
        {
            sum = sum + arr[i][j];
        }

        printf("%d ", sum);
    }

    printf("\nColumn sums:\n");

    for (j = 0; j < c; j++)
    {
        int sum = 0;

        for (i = 0; i < r; i++)
        {
            sum = sum + arr[i][j];
        }

        printf("%d ", sum);
    }

    printf("\n");

    return 0;
}