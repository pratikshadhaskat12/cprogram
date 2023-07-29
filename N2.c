#include <stdio.h>
int main()
{
         int n,i, count = 0;
         scanf("%d",&n);
         
       for (i = 1; i <= n; i++) {
        int div = 2;
        while(div <= 10 && i%div !=0) {
         div++;
         }
         
         if(div > 10) {
          count++;
          
         }
        }
        
        printf("%d", count);
        return 0;
        }
         
         
       
         
