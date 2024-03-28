//13.calculate the Factorial of a Given Number using while loop

#include <stdio.h>

int main() {
    int number, factorial = 1;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is negative
    if (number < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } else {
        // Calculate factorial using a while loop
        while (number > 0) {
            factorial = factorial * number;
            number--;
        }
        printf("Factorial: %d\n", factorial);
    }

    
}

