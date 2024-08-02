#include <stdio.h>

int main() {
    int N;

    // Input
    printf("Enter the value of N: ");
    scanf("%d", &N);

    // Output odd numbers in descending order
    printf("Odd numbers in descending order up to %d are:\n", N);

    for (int i = N; i >= 1; i--) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
