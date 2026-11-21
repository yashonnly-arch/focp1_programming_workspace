#include <stdio.h>

int countMultiples(int n, int k)
{
    return n / k;
}

int main()
{
    int n, k, result;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter the value of k: ");
    scanf("%d", &k);

    result = countMultiples(n, k);

    printf("The count of multiples is: %d\n", result);

    return 0;
}
