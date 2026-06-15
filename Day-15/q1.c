//Write a program to Reverse array.

#include <stdio.h>

int main()
{
    int a[100], size, i;

    printf("Enter number of elements: ");
    scanf("%d", &size);

    printf("Enter array elements:\n");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Array in reverse order:\n");
    for(i = size - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }

    return 0;
}