/*10.Write a program in C to extract a substring from a given string*/
#include <stdio.h>

int main() {
    char str[100], substr[100];
    int start, length, i;

    // Input a string
    printf("Enter a string: ");
    scanf("%s", str);

    // Input starting index and length of the substring
    printf("Enter starting index of the substring: ");
    scanf("%d", &start);
    printf("Enter length of the substring: ");
    scanf("%d", &length);

    // Extract the substring
    for (i = 0; i < length && str[start + i] != '\0'; i++) {
        substr[i] = str[start + i];
    }
    substr[i] = '\0'; // Add null terminator to the end of the substring

    // Print the extracted substring
    printf("Substring extracted from the string: %s\n", substr);

    return 0;
}


