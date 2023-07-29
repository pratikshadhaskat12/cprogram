#include <stdio.h>

void printHollowSquare(int size) {
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            // Print the border of the square or the interior space
            if (i == 1 || i == size || j == 1 || j == size) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

int main() {
    int size;
    printf("Enter the size of the hollow square: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Please enter a positive size greater than 0.\n");
        return 1;
    }

    printf("Hollow square pattern of size %d:\n", size);
    printHollowSquare(size);

    return 0;
}

