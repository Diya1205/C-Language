/*15.Write a program in C to find the largest and smallest words in a string.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h> // Include ctype.h for isspace() function

int main() {
    char str[100];
    char largestWord[100], smallestWord[100];
    int i = 0, start, end;
    int maxLength = 0, minLength = 100; // Initialize maxLength to 0 and minLength to a large value

    // Input a string
    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    // Find the largest and smallest words in the string
    while (str[i] != '\0') {
        // Skip leading spaces
        while (isspace(str[i])) {
            i++;
        }
        start = i; // Start of the word

        // Find the end of the word
        while (str[i] != '\0' && !isspace(str[i])) {
            i++;
        }
        end = i - 1; // End of the word

        // Calculate the length of the current word
        int length = end - start + 1;

        // Update the largest word if the current word is larger
        if (length > maxLength) {
            maxLength = length;
            strncpy(largestWord, &str[start], length);
            largestWord[length] = '\0'; // Add null terminator to the end of the largest word
        }

        // Update the smallest word if the current word is smaller
        if (length < minLength && length > 0) {
            minLength = length;
            strncpy(smallestWord, &str[start], length);
            smallestWord[length] = '\0'; // Add null terminator to the end of the smallest word
        }
    }

    // Print the largest and smallest words
    printf("Largest word: %s\n", largestWord);
    printf("Smallest word: %s\n", smallestWord);

    return 0;
}

