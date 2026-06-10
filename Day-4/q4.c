//Write a program to Print Armstrong numbers in a range.

#include <stdio.h>
int main() 
{
int str,end,i,num,rem,result;
printf("Enter starting number: ");
scanf("%d", &str);
printf("Enter ending number: ");
scanf("%d", &end);

for (i = str; i <= end; i++)
    {
        num = i;
        result = 0;

     while (num > 0) 
       {
        rem= num % 10;
        result = result + (rem*rem*rem);
        num = num / 10;
        }

     if (result == i) 
        {
            printf("%d ", i);
        }
    }

    return 0;
}