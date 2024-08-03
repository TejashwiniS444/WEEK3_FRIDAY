//Program to print ages above 18
#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of persons: ");
    scanf("%d", &n);

    int A[n]; 
    int B[n]; 
    int j = 0; 

    printf("Enter the ages of persons: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    for(int i = 0; i < n; i++) {
        if(A[i] >= 18) {
            B[j] = A[i];
            j++;
        }
    }

    printf("Output: A = ");
    for(int i = 0; i < j; i++) {
        printf("%d", B[i]);
        if(i < j - 1) {
            printf(",");
        }
    }
    printf("\n");

    return 0;
}
