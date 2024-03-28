//15.Calculate sum of 10 numbers using of while loop

#include <stdio.h>

int main() {
    int sum = 0;
    int i = 0;
    int number;

    // Using a while loop to input 10 numbers and calculate their sum
    while (i < 10) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &number);
        sum = sum + number; // Add the entered number to the sum
        i++;
    }

    // Display the sum
    printf("Sum of the 10 numbers is: %d\n", sum);

    
}

