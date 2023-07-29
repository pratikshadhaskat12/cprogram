#include <stdio.h>
int main ()
{
          int sum = 0; 
          int count = 0;
          int number = 2;
          
          while (count < 10) {
          
          sum +=number;
          number += 2;
          count++;
          
          }
          
          printf("The sum of the first 10 even numbers is: %d\n", sum);
          
          return 0;
          }
          
