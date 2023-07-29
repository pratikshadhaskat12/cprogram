#include <stdio.h>
int main(){
          int length, breadth;
          char operator;
          printf("Enter the length: ");
          scanf("%d", &length);
          
          printf("Enter the breadth: ");
          scanf("%d", &breadth);
          
          printf("Enter an arithmetic operator (+, -, *, /): ");
          scanf(" %c", &operator);
          switch (operator) {
          case '+':
            printf("Sum: %d\n", length + breadth);
            break;
            
          case '-':
              printf("Difference: %d\n", length - breadth);
              break;
           case '*':
              printf("Product: %d\n", length * breadth);
           case '/':
           if (breadth != 0) {
             printf("Quotient: %.2f\n", (float)length / breadth);
             }else {
                printf("Error: Division by zero is not allowed.\n");
                }
                break;
                default:
                printf("Invalid operator!\n");
                break;
                }
                return 0;
                }             

