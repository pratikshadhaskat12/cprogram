#include <stdio.h>
int main(){
          int N;
          printf("Enter a number: ");
          scanf("%d", &N);
          
           if(N % 10 == 3){
                printf("The number ends with 3.\n");
             } else if (N % 10 == 7) {
                     printf("The number ends with 7.\n");
             } else {
                   printf("The number does not end with 3 or 7.\n");
                   printf("The number is: %d\n", N);
                   }
                   return 0;
                   }
           
          
