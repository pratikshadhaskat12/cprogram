#include <stdio.h>

int main() {
    int start, end;
    int sum = 0;

    printf("Enter the first number: ");
    scanf("%d", &start);

    printf("Enter the second number: ");
    scanf("%d", &end);

    // Swap the values if the first number is greater than the second number
    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }

    // If the starting number is odd, move it to the next even number
    if (start % 2 != 0) {
        start++;
    }

    // Calculate the sum of even numbers between start and end (inclusive)
    while (start <= end) {
        sum += start;
        start += 2; // Move to the next even number
    }

    printf("Sum of even numbers between the two numbers (inclusive): %d\n", sum);

    return 0;
}

