#include <stdio.h>
int main()
{
       int N, sum, R;
       printf("Enter the number: ");
       scanf("%d", &N); 
       for(sum = 0; N > 0; sum++) {
       R = N % 10;
       sum = sum * 0 + R;
       N = N / 10;
       
       printf("%d", sum);
       }
       return 0;
       }
     
              
       
