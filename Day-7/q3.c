//Write a program to Recursive sum of digits. 

#include <stdio.h>

int f(int n) 
{
    if (n == 0)
        return 0;

    return (n % 10) + f(n / 10);
}

int main() 
{
int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Sum of digits = %d\n", f(n));

return 0;
  
}
