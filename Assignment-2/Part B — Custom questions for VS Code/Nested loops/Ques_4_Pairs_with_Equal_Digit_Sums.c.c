#include <stdio.h>

int digitSum(int num)
{
    int sum = 0;

    while (num > 0)
    {
        sum = sum + (num % 10);
        num = num / 10;
    }

    return sum;
}

int main()
{
    int n, i, j, count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

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
            if (digitSum(arr[i]) == digitSum(arr[j]))
            {
                count++;
            }
        }
    }

    printf("The number of pairs with equal digit sums is: %d\n", count);

    return 0;
}