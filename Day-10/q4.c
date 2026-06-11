/*Write a program to Print character pyramid.
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA    */

#include <stdio.h>
int main()
{
int i, j;
char ch;
int n = 5;

for(i = 1; i <= n; i++)
   {
for(j = 1; j <= n - i; j++)
   {
    printf(" ");
   }
for(ch = 'A'; ch < 'A' + i; ch++)
   {
    printf("%c", ch);
   }
for(ch = 'A' + i - 2; ch >= 'A'; ch--)
   {
    printf("%c", ch);
   }
    printf("\n");
   }
return 0;
  
}
