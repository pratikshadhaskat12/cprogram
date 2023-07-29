#include <stdio.h>
int main() {
         int input;
         
         printf("Enter a number from 1 to 12: ");
         scanf("%d", &input);
         
         if (input == 1) {
           printf("january\n");
        } else if (input == 2){
           printf("february\n");
        } else if (input == 3){
           printf("march\n");
        } else if (input == 4){
           printf("april\n");
        } else if (input == 5){
           printf("may\n");
         } else if (input == 6){
           printf("jun\n");
         } else if(input == 7){
          printf("july\n");
         } else if(input == 8){
          printf("august\n");
        } else if(input == 9){
         printf("september\n");
        } else if(input == 10){
         printf("octomber\n");
        } else if(input == 11){
        printf("november\n");
        } else if(input == 12){
         printf("december\n");
        } else {
           printf("Invalid input!\n");
         }
         return 0;
         }
         
        
        
        
        
        
        
