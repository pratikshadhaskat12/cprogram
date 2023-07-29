#include <stdio.h>

// Function to calculate the factorial of a given number
unsigned long long factorial(int num) {
    if (num == 0 || num == 1)
        return 1;

    unsigned long long result = 1;
    for (int i = 2; i <= num; i++)
        result *= i;

    return result;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    double sum = 0.0;
    for (int i = 0; i <= n; i++) {
        // Calculate the factorial for each term
        unsigned long long fact = factorial(i);
        // Add the term to the sum
        sum += 1.0 / fact;
    }

    printf("The sum of the sequence up to 1/%d! is: %.6f\n", n, sum);

    return 0;
}

         
