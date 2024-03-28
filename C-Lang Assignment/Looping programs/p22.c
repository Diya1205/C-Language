//22. Accept 3 numbers from user using while loop and check each numbers
//palindrome

#include <stdio.h>

// Function to check if a number is palindrome
int isPalindrome(int num) {
    int reversedNum = 0, originalNum = num;
    while (num > 0) {
        reversedNum = reversedNum * 10 + num % 10;
        num /= 10;
    }
    return originalNum == reversedNum;
}

int main() {
    int number;
    int count = 0;

    // Accepting 3 numbers from the user using a while loop
    while (count < 3) {
        printf("Enter number %d: ", count + 1);
        scanf("%d", &number);

        if (isPalindrome(number))
            printf("%d is a palindrome number.\n", number);
        else
            printf("%d is not a palindrome number.\n", number);

        count++;
    }

    return 0;
}

