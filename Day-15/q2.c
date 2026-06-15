//Write a program to Rotate array left.

#include <stdio.h>

int main()
{
    int a[100], size, i, first;

    printf("Enter number of elements: ");
    scanf("%d", &size);

    printf("Enter array elements:\n");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    first = a[0];

    for(i = 0; i < size - 1; i++)
    {
        a[i] = a[i + 1];
    }

    a[size - 1] = first;

    printf("Array after left rotation:\n");
    for(i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}