#include <stdio.h>
int main()
{
        int N, i, multiply = 1;
        printf("Enter the N: ");
        scanf("%d", &N);
        for(i = 1; i<=N; i++) {
         multiply = multiply * i;
         }
          printf("%d\n", multiply);
          
          return 0;
          }
        
        
