//Write a program to Recursive factorial.

#include <stdio.h>

int f(int n) 
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * f(n - 1);
}

int main() {#include <stdio.h>

int f(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * f(n - 1);
}

int main() 
  {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial = %d\n", f(n));

    return 0;
   }
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial = %d\n", f(n));

    return 0;
}
