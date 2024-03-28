/*1. Write a program in C to find the length of a string without using library
functions.*/
#include <stdio.h>

int main() {
    char str[100];
    int length = 0;
    int i = 0;

    // Input a string
    printf("Enter a string: ");
    scanf("%s", str);

    // Iterate over the characters until the null terminator is encountered
    while (str[i] != '\0') {
        length++;
        i++;
    }

    // Print the length of the string
    printf("Length of the string: %d\n", length);

    return 0;
}


