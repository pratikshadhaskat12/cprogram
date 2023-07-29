#include <stdio.h>
int main ()
{
         int a = 5, i, sum = 0;
         printf("the sum of the first 10 natural number:\n");
         
         for(i = 1; i <= a; i++) {
         sum = sum + i;
         printf("%d\n", sum);
         }
         
         return 0;
         }
