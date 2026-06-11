//Write a program to Write function to find factorial.

#include <stdio.h>
int f(int n) 
{
    int j, fact = 1;

    for (j = 1; j <= n; j++)
      {
        fact = fact * j;
     }
     return fact;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial = %d", f(n));
    return 0;
  
}
