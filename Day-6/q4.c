//Write a program to Find x^n without pow().

#include <stdio.h>

int main()
{
int x, n, r = 1;
printf("Enter base (x): ");
scanf("%d", &x);
printf("Enter power (n): ");
scanf("%d", &n);

for (int j = 1; j <= n; j++) 
    {
        r = r * x;
    }
printf("%d^%d = %d\n", x, n, r);
return 0;
  
}
