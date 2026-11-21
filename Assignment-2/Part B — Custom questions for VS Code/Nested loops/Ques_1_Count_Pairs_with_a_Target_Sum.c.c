#include <stdio.h>

int main()
{
    int n, target, i, j, count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the target sum: ");
    scanf("%d", &target);

    int arr[n];

    printf("Enter the array elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                count++;
            }
        }
    }

    printf("The number of pairs with the target sum is: %d\n", count);

    return 0;
}