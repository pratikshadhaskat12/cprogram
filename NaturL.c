#include <stdio.h>
int main()
{ 
        int i, n;
        printf("enter the value of n\t");
        scanf("%d", &n);
        printf("print natural number from 1 to %d\n",  n);
        for(i = 1; i <= n; i++) {
        
        printf("%d", i);
        i++;
        }
        return 0;
        }

