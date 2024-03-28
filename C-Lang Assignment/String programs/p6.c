/*6. Write a program in C to count the total number of alphabets, digits and special
characters in a string*/
#include <stdio.h>

int main() {
    char str[100];
    int alphabets = 0, digits = 0, specialChars = 0;
    int i = 0;

    // Input a string
    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    // Count the number of alphabets, digits, and special characters
    while (str[i] != '\0') {
        // Check if the character is an alphabet
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            alphabets++;
        }
        // Check if the character is a digit
        else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        }
        // If the character is not an alphabet or a digit, it is considered as a special character
        else {
            specialChars++;
        }
        i++;
    }

    // Print the counts of alphabets, digits, and special characters
    printf("Total number of alphabets: %d\n", alphabets);
    printf("Total number of digits: %d\n", digits);
    printf("Total number of special characters: %d\n", specialChars);

    return 0;
}

