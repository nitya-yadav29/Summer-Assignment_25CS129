//Write a program to Find factorial of a number.

#include<stdio.h>
int main() 
{
int n,i,fact=1;
printf("Enter a number whose factorial you want:");
scanf("%d",&n);

  for(i=1;i<=n;i++) 
  {
     fact=fact*i;
  }

printf("Factorial:%d",fact);

return 0;

}