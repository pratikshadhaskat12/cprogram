#include <stdio.h>
int main(){
           int A, B, C;
           printf("Enter the A");
           scanf("%d", &A);
           
           printf("Enter the B");
           scanf("%d", &B);
             
           printf("Enter the C");
           scanf("%d", &C);
           
           if (A > B){
             if (A > C) {
              printf("\n first number %d is maximum", A);
             } else {
             printf("\n third number %d is maximum", C);
             }
             } else {
             if (B > C) {
                 printf("\n second number %d is maximum", B);
               } else {
                printf("\n third nimber %d is maximum", C);
                }
                }
                return 0;
                } 

             
              
           
           

