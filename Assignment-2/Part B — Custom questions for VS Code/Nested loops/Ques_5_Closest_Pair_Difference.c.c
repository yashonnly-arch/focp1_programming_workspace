#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, minDiff;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the array elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    minDiff = abs(arr[0] - arr[1]);

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            int diff = abs(arr[i] - arr[j]);

            if (diff < minDiff)
            {
                minDiff = diff;
            }
        }
    }

    printf("The minimum absolute difference is: %d\n", minDiff);

    return 0;
}