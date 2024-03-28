/*4. Write a program in C to count the total number of words in a string.*/
#include <stdio.h>

int main() {
    char str[100];
    int wordCount = 0;
    int i = 0;

    // Input a string
    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    // Count the number of words
    while (str[i] != '\0') {
        // Skip leading spaces
        while (str[i] == ' ') {
            i++;
        }
        // If the current character is not a space and the previous character is a space or the beginning of the string, it indicates the start of a word
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' ')) {
            wordCount++;
        }
        i++;
    }

    // Print the total number of words
    printf("Total number of words in the string: %d\n", wordCount);

    return 0;
}

