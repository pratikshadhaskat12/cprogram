#include <stdio.h>
int main(){
         int  num1, num2;
         
         printf("Enter the first number: ");
         scanf("%d", &num1);
         
         printf("Enter the second number: ");
         scanf("%d", &num2);
         
         if(num1 > num2) {
          int difference = num1 - num2;
          printf("The difference is: %d\n", difference);
         } else {
          int sum = num1 + num2;
          printf("The sum is: %d\n", sum);
          
          }
          return 0;
          }
         
       
        
