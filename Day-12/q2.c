//Write a program to Write function for Armstrong.

#include <stdio.h>
#include <math.h>

int armstrong(int n)
{
    int temp = n, sum = 0, digits = 0, rem;

    while(temp > 0)
    {
        digits++;
        temp /= 10;
    }

    temp = n;

    while(temp > 0)
    {
        rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }

    if(sum == n)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(armstrong(n))
        printf("Armstrong Number\n");
    else
        printf("Not an Armstrong Number\n");

    return 0;
}
