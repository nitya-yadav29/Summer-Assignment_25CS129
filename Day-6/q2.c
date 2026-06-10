//Write a program to Convert binary to decimal.

#include <stdio.h>
int main()
{
int b, d = 0, j = 0, r;
intf("Enter a binary number: ");
scanf("%d", &b);

while (b > 0)
  {
      r = b % 10;

      if (r == 1)
      {
            d += (1 << j);
      }
        b = b / 10;
        j++;
   }
printf("Decimal = %d\n", d);
return 0;
  
}
