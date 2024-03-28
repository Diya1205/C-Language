/*17.Calculate 5 numbers from user and calculate number of even and odd using
of while loop*/

#include <stdio.h>

int main() {
    int evenCount = 0;
    int oddCount = 0;
    int number;
    int i = 0;

    // Using a while loop to input 5 numbers and count even and odd numbers
    while (i < 5) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &number);

        if (number % 2 == 0)
            evenCount++; // Increment even count if the number is even
        else
            oddCount++; // Increment odd count if the number is odd

        i++; // Move to the next number
    }

    
    printf("Number of even numbers: %d\n", evenCount);
    printf("Number of odd numbers: %d\n", oddCount);

    return 0;
}

