//Write a program to Check Armstrong number.

#include <stdio.h>
int main()
{
int n, o, rem, result = 0;
printf("Enter a number:");
scanf("%d", &n);

o = n;
while(n > 0)
 {
        rem=n%10;
        result=result+(rem*rem*rem);
        n=n/10;
 }

if (o == result) 
    {
        printf("Armstrong number\n");
    }
else 
    {
        printf("Not an Armstrong number\n");
    }

return 0;

}