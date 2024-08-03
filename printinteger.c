//Program to print integers from 1 till N 
#include <stdio.h>

int main() {
    int N;

    printf("Enter an integer N: ");
    scanf("%d", &N);

    if (N > 0) {
        printf("Output: array = ");
        for (int i = 1; i <= N; i++) {
            printf("%d", i);
            if (i < N) {
                printf(",");
            }
        }
        printf("\n");
    } else {
        printf("Please enter a positive integer.\n");
    }

    return 0;
}
