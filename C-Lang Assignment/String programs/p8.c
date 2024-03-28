/*8. Write a program in C to count the total number of vowels or consonants in a
string.*/
#include <stdio.h>
#include <ctype.h> // Include ctype.h for isalpha() and tolower() functions

int main() {
    char str[100];
    int vowels = 0, consonants = 0;
    int i = 0;

    // Input a string
    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    // Count the number of vowels and consonants
    while (str[i] != '\0') {
        // Convert the character to lowercase
        char ch = tolower(str[i]);

        // Check if the character is an alphabet
        if (isalpha(ch)) {
            // Check if the character is a vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
        i++;
    }

    // Print the counts of vowels and consonants
    printf("Total number of vowels: %d\n", vowels);
    printf("Total number of consonants: %d\n", consonants);

    return 0;
}


