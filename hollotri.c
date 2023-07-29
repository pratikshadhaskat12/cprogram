#include <stdio.h>
int main()
{
         int height, i;
         printf("Enter the height of the hollow  triangle: ");
         scanf("%d", &height);
         
         if(height <= 0) {
           printf("enter the positive height greater than 0.\n");
           return 1;
           }
           
           printf("*");
           
           for(int j = 1; j < 2 * i - 1; j++) {
            printf(" ");
           }
           
           if(i != 1) {
            printf("*");
           }
           
           printf("\n");
           }

            return 0;
            }
         
