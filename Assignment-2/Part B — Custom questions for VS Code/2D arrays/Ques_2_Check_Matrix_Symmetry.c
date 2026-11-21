#include <stdio.h>

int main()
{
    int n, i, j, flag = 1;

    printf("Enter the order of the matrix: ");
    scanf("%d", &n);

    int arr[n][n];

    printf("Enter the matrix elements:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i][j] != arr[j][i])
            {
                flag = 0;
                break;
            }
        }

        if (flag == 0)
        {
            break;
        }
    }

    if (flag == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}