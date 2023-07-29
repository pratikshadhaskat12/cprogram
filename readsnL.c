#include <stdio.h>

int main() {
    int N;
    printf("Enter the number of inputs: ");
    scanf("%d", &N);

    char inputs[N][100];

    int i;
    for (i = 0; i < N; i++) {
        printf("Enter input %d: ", i+1);
        scanf("%s", inputs[i]);
    }

    printf("Inputs:\n");
    for (i = 0; i < N; i++) {
        printf("%s\n", inputs[i]);
    }

    return 0;
}

