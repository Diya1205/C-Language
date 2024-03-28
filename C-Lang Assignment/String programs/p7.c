/*7. Write a program in C to copy one string to another string.*/
#include <stdio.h>

int main() {
    char source[100], destination[100];
    int i = 0;

    // Input a string
    printf("Enter a string: ");
    scanf("%s", source);

    // Copy the string to another string
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0'; // Add null terminator to the end of the destination string

    // Print the copied string
    printf("Copied string: %s\n", destination);

    return 0;
}

