/*13.WAP to accept 5 numbers from user and check entered number is even or odd
using of array*/
#include <stdio.h>

int main() {
    int numbers[5];
    int i;

    // Accept 5 numbers from the user
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Check if each number is even or odd
    printf("\nChecking if each number is even or odd:\n");
    for (i = 0; i < 5; i++) {
        if (numbers[i] % 2 == 0) {
            printf("%d is even.\n", numbers[i]);
        } else {
            printf("%d is odd.\n", numbers[i]);
        }
    }

    return 0;
}

