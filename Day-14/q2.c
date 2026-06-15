//Write a program to Frequency of an element.

#include <stdio.h>

int main()
{
    int a[100], size, item, count = 0, i;

    printf("Enter number of elements: ");
    scanf("%d", &size);

    printf("Enter array elements:\n");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to find frequency: ");
    scanf("%d", &item);

    for(i = 0; i < size; i++)
    {
        if(a[i] == item)
        {
            count++;
        }
    }

    printf("Frequency of %d = %d", item, count);

    return 0;
}