//28. 1 2 3 6 9 18 27 54...

#include <stdio.h>

int main() {
    int n,i;
    int term = 1;

    // Accepting the value of n from the user
    printf("Enter the number of terms you want to generate: ");
    scanf("%d", &n);

    // Generating and printing the series
    printf("Series: ");
    for (i = 0; i < n; i++) {
        printf("%d ", term);
        if (i % 2 == 0) {
            term *= 2; // Multiply by 2 for even indices
        } else {
            term *= 3; // Multiply by 3 for odd indices
        }
    }

    printf("\n");

    return 0;
}

