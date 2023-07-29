#include <stdio.h>
int main()
{ 
         int N, i, product = 1;
         printf("Enter the number");
         scanf("%d", &N);
         
         for(i = 1; i <= N; i++) {
         product =product * i;
             
            }
            
            printf("%d", product);
            return 0;
              }
              
