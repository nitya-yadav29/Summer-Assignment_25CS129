//Write a program to Write function to check prime.

#include <stdio.h>
int prime(int n)
{
    int j;
    if (n <= 1)
        return 0;
    for (j = 2; j < n; j++)
      {
        if (n % j == 0)
            return 0;
      }

    return 1;
}

int main() 
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (prime(n))
        printf("Prime Number");
    else
        printf("Not a Prime Number");
    return 0;
  
}
