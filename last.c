#include <stdio.h>
int main()
{
         int num,last_digit;
         printf("Enter a number: ");
         scanf("%d",&num);
         last_digit = num % 10;
         printf("Last digit of a number is %d\n",last_digit);
         return 0;
         }
