/*5.Write a program in C to compare two strings without using string library
functions.*/
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int isEqual = 1;
    int i = 0;

    // Input two strings
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    // Compare the strings character by character
    while (str1[i] != '\0' || str2[i] != '\0') {
        // If characters are different, set isEqual to 0 and break the loop
        if (str1[i] != str2[i]) {
            isEqual = 0;
            break;
        }
        i++;
    }

    // Print the result of comparison
    if (isEqual) {
        printf("The two strings are equal.\n");
    } else {
        printf("The two strings are not equal.\n");
    }

    return 0;
}

 
