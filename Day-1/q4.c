//Write a program to Count digits in a number.

#include <stdio.h>
int main()
{
int num,count=0;
printf("Enter a number:");
scanf("%d",&num);

if(num == 0)
    {
        count = 1;
    }
else
    {
      for(; num != 0; num = num / 10)
        {
           count++;
        }
    }

printf("Total digits = %d",count);
return 0;

}