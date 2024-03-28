/*14.Write a program in C to combine two strings manually*/
#include <stdio.h>

int main() {
    char str1[100], str2[100], combined[200];
    int i, j;

    // Input first string
    printf("Enter the first string: ");
    scanf("%s", str1);

    // Input second string
    printf("Enter the second string: ");
    scanf("%s", str2);

    // Combine the two strings manually
    i = 0;
    while (str1[i] != '\0') {
        combined[i] = str1[i];
        i++;
    }
    j = 0;
    while (str2[j] != '\0') {
        combined[i] = str2[j];
        i++;
        j++;
    }
    combined[i] = '\0'; // Add null terminator to the end of the combined string

    // Print the combined string
    printf("Combined string: %s\n", combined);

    return 0;
}

