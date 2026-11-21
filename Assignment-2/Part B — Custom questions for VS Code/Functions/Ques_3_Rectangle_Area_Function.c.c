#include <stdio.h>

int areaOfRectangle(int length, int width)
{
    return length * width;
}

int main()
{
    int length, width, result;

    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);

    result = areaOfRectangle(length, width);

    printf("The area of the rectangle is: %d\n", result);

    return 0;
}