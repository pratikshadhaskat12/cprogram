#include <stdio.h>
int main(){
       int numDays;
       int charge = 0;
       
       print("Enter the number of days: ");
       scanf("%d", &numDays);
       
       if (numDays <= 5) {
            charge = numDays * 2;
           } else if (numDays <= 10) {
           charge = 5* 2 + (*numDAYS - 5) *  4;
           } else {
           charge = 5 * 2 + 5 * 4 + (numDAYS -10) *31;
           }
           printf("The charge for  accessing the library for %d days is Rs %d.\n", numDays, charge);
           return 0;
           }
           
