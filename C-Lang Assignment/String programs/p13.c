/*13.Write a program in C to remove characters from a string except alphabets.*/
#include <stdio.h>
#include <ctype.h> // Include ctype.h for isalpha() function

int main() {
    char str[100];
    int i, j;

    // Input a string
    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    // Remove non-alphabetic characters from the string
    for (i = 0, j = 0; str[i] != '\0'; i++) {
        // Check if the character is an alphabet
        if (isalpha(str[i])) {
            // Copy the alphabet to the string
            str[j++] = str[i];
        }
    }
    str[j] = '\0'; // Add null terminator to the end of the modified string

    // Print the modified string
    printf("String after removing non-alphabetic characters: %s\n", str);

    return 0;
}

