#include <stdio.h>

int main() {
    int N, num, sum = 0;
    
    printf("Enter the value of N: ");
    scanf("%d", &N);
    
    printf("Enter %d integers:\n", N);
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        sum += num;
    }
    
    printf("The sum is: %d\n", sum);
    
    return 0;
}

