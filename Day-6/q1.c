//Write a program to Convert decimal to binary.

#include <stdio.h>
int main() 
{
int d, b[32], j = 0;
printf("Enter a decimal number: ");
scanf("%d", &d);

if (d == 0) 
    {
        printf("Binary: 0\n");
        return 0;
    }
while (d > 0)
    {
        b[j] = d % 2;
        d = d / 2;
        j++;
    }
printf("Binary: ");
    
for (int k = j - 1; k >= 0; k--)
    {
        printf("%d", b[k]);
    }
printf("\n");
return 0;
  
}
