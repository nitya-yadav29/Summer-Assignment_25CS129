//Write a program to Check whether a number is palindrome.

#include <stdio.h>
int main()
{
int n,d,r,rev=0;
printf("Enter a number:");
scanf("%d",&n);
d=n;
while(n!= 0)
   {
     r= n%10;
     rev=rev*10+r;
     n=n/10;
   }
if(d==reverse)
     printf("The number is a palindrome.");
else
     printf("The number is not a palindrome.");

return 0;

}