//Write a program to Find duplicates in array.

#include <stdio.h>

int main()
{
    int a[100], size, i, j;

    printf("Enter number of elements: ");
    scanf("%d", &size);

    printf("Enter array elements:\n");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Duplicate elements are:\n");

    for(i = 0; i < size; i++)
    {
        for(j = i + 1; j < size; j++)
        {
            if(a[i] == a[j])
            {
                printf("%d ", a[i]);
                break;
            }
        }
    }

    return 0;
}