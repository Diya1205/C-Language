/*10.WAP to perform Palindrome number using for loop and function*/
#include <stdio.h>

// Function to check if a number is palindrome
int isPalindrome(int num) {
    int reversedNum = 0;
    int originalNum = num;

    // Reverse the number
    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    // Check if the reversed number is equal to the original number
    if (reversedNum == originalNum)
        return 1; // Palindrome
    else
        return 0; // Not a palindrome
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is palindrome
    if (isPalindrome(number))
        printf("%d is a palindrome number.\n", number);
    else
        printf("%d is not a palindrome number.\n", number);

    return 0;
}

