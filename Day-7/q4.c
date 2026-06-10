//Write a program to Recursive reverse number.

#include <stdio.h>
int r = 0;
int f(int n) 
{
    if (n == 0)
    return r;

    r = r * 10 + (n % 10);
    return f(n / 10);
}

int main() 
{
    int n;
    intf("Enter a number: ");
    scanf("%d", &n);
    printf("Reversed number = %d\n", f(n));
return 0;
  
}
