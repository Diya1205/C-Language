//23. C Program to Reverse a Number Using FOR Loop
#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder;

    // Accepting the number from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Reversing the number using a for loop
    for (; num != 0; num /= 10) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
    }

    // Displaying the reversed number
    printf("Reversed number: %d\n", reversedNum);

    return 0;
}

