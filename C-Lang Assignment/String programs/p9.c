/*9. Write a program in C to find the maximum number of characters in a string.*/
#include <stdio.h>

int main() {
    char str[100];
    int maxChars = 0;
    int i = 0;

    // Input a string
    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    // Calculate the maximum number of characters
    while (str[i] != '\0') {
        maxChars++;
        i++;
    }

    // Print the maximum number of characters
    printf("Maximum number of characters in the string: %d\n", maxChars);

    return 0;
}

