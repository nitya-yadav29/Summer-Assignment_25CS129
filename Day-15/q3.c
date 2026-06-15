//Write a program to Rotate array right.

#include <stdio.h>

int main()
{
    int a[100], size, i, last;

    printf("Enter number of elements: ");
    scanf("%d", &size);

    printf("Enter array elements:\n");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    last = a[size - 1];

    for(i = size - 1; i > 0; i--)
    {
        a[i] = a[i - 1];
    }

    a[0] = last;

    printf("Array after right rotation:\n");
    for(i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}