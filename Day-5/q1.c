//Write a program to Check perfect number.

#include <stdio.h>
int main()
{
int n,i,l=1;
printf("Enter a number:");
scanf("%d",&n);

if(n< 0) 
    {
      n= -n;
    }

for(i = 2; i <= n; i++)
 {
   while (n% i == 0) 
      {
          l = i;
          n= n / i;
      }
 }
printf("Largest prime factor = %d\n", l);
return 0;

}