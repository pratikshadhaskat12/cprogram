#include <stdio.h>
int main(){
    float side1, side2;
    
    printf("Enter the length of side 1: ");
    scanf("%f", &side1);
    
    printf("Enter the length of side 2: ");
    scanf("%f", &side2);
    
    if (side1 == side2) {
      printf("It is a square\n");
     } else {
       printf("It is a Rectangle\n");
     }
     
     return 0;
     }
