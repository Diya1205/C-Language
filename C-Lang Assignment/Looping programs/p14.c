//14.Accept 5 numbers from user and find those numbers factorials

#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int numbers[5];
    int i;

    // Accepting 5 numbers from the user
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Calculating and displaying factorials
    printf("Factorials:\n");
    for (i = 0; i < 5; i++) {
        printf("%d! = %d\n", numbers[i], factorial(numbers[i]));
    }

    return 0;
}

