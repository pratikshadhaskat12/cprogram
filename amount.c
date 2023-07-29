#include <stdio.h>
#include <math.h>
double calculatAmount(double P, double I,double N){
double T = P * pow(1 + I/100, N);
return T;
}   
int main() 
{        
         double P,I,N;
         P = 1000;
         I = 2;
         N = 2;
         double T_a = calculateAmount(P, I, N);
         printf("Case a: T = %.2lf\n",T_a)T
         
         P= 1500;
         I = 5;
         N = 1;
         double T_a = calculateAmount(P, I, N);
         printf("case b: T = %.2lf\n",T_b);
         P = 100;
         I = 10;
         N = 3;
         double T_c = calculateAmount(P, I,N);
         printf("Case c: T = %.2lf\n"T_c);
         return 0;
         }
