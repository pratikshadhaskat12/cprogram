#include <stdio.h>
int main(){

         float sellingPrice, costPrice;
         
         printf("Enter the selling Price: ");
         scanf("%f", &sellingPrice);
         
         printf("Enter the cost Price; ");
         scanf("%f", &costPrice);
         
         if (sellingPrice >= costPrice) {
            printf("Invalid\n");
          } else {
          float loss = costPrice - sellingPrice;
          float lossPercentage = (loss / costPrice) * 100;
          printf("Loss Percentage: %.2f%%\n", lossPercentage);
          }
          
          return 0;
          }
