/*12.Write a program in C to find the number of times a given word 'is' appears in
the given string.*/
 	#include <stdio.h>
#include <string.h>

int main() {
    char str[100], word[] = "is";
    int count = 0;

    // Input a string
    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    // Find the word 'is' in the string
    char *ptr = strstr(str, word);
    while (ptr != NULL) {
        count++;
        ptr = strstr(ptr + 1, word);
    }

    // Print the number of times the word 'is' appears in the string
    printf("The word 'is' appears %d times in the string.\n", count);

    return 0;
}

