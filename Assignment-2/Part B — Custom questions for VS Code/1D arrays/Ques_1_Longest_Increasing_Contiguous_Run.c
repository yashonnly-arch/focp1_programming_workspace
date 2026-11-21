#include <stdio.h>

int main()
{
    int n, i, current = 1, max = 1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the array elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            current++;
        }
        else
        {
            current = 1;
        }

        if (current > max)
        {
            max = current;
        }
    }

    printf("The length of the longest increasing contiguous run is: %d\n", max);

    return 0;
}