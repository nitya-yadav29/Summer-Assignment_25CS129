//Write a program to Second largest element.

#include <stdio.h>

int main()
{
    int a[100], size, i, largest, secondLargest;

    printf("Enter number of elements: ");
    scanf("%d", &size);

    printf("Enter array elements:\n");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    largest = secondLargest = a[0];

    for(i = 1; i < size; i++)
    {
        if(a[i] > largest)
        {
            secondLargest = largest;
            largest = a[i];
        }
        else if(a[i] > secondLargest && a[i] != largest)
        {
            secondLargest = a[i];
        }
    }

    printf("Second largest element = %d", secondLargest);

    return 0;
}