//Write a program to Linear search.

#include <stdio.h>

int main()
{
    int a[100], size, item, pos = -1, i;

    printf("Enter number of elements: ");
    scanf("%d", &size);

    printf("Enter array elements:\n");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &item);

    for(i = 0; i < size; i++)
    {
        if(a[i] == item)
        {
            pos = i;
            break;
        }
    }

    if(pos != -1)
    {
        printf("Element found at position %d", pos + 1);
    }
    else
    {
        printf("Element not found");
    }

    return 0;
}