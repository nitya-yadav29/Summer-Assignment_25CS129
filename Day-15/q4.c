//Write a program to Move zeroes to end.

#include <stdio.h>

int main()
{
    int a[100], size, i, j = 0, temp;

    printf("Enter number of elements: ");
    scanf("%d", &size);

    printf("Enter array elements:\n");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < size; i++)
    {
        if(a[i] != 0)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            j++;
        }
    }

    printf("Array after moving zeroes to end:\n");
    for(i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}