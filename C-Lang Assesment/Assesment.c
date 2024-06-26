#include <stdio.h>
#include <string.h>

// Function to reverse a string
void reverse(char str[])
{
    int length = strlen(str);
    int i = 0, j = length - 1;
    char temp;

    // Swap characters from start and end of the string
    while (j > i) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    printf("Reversed string: %s\n", str);
}

// Function to concatenate two strings
void concatenate(char str1[], char str2[])
{
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);
}

// Function to check if a string is a palindrome
void palindrome(char str[])
{
    int length = strlen(str);
    int i = 0, j = length - 1;
    int isPalindrome = 1; // Assign value 

    // Compare characters from start and end of the string 
    while (j > i) {
        if (str[i] != str[j]) {
            isPalindrome = 0; // Not a palindrome
            break;
        }
        i++;
        j--;
    }

    // Print whether it's a palindrome or not
    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");
}

// Function to copy a string
void copy(char a[], char b[]) {
    strcpy(b, a);
    printf("Copied string: %s\n", b);
}

// Function to get the length of a string
int getLength(char str[])
{
    return strlen(str);
}

// Function to calculate the frequency of each character in a string
void countCharacterFrequency(char str[])
{
    int frequency[256] = { 0 };
    int i, length = strlen(str);

    // Count frequency of each character
    for (i = 0; i < length; i++)
    {
        frequency[(unsigned char)str[i]]++;
    }

    // Print character frequencies
    printf("Character frequency:\n");
    for (i = 0; i < 256; i++)
    {
        if (frequency[i] > 0)
        {
            printf("'%c' : %d\n", i, frequency[i]);
        }
    }
}

// Function to count vowels and consonants in a string
void countVowelsAndConsonants(char str[]) {
    int vowels = 0, consonants = 0;
    int i, length = strlen(str);

    // Iterate through each character in the string
    for (i = 0; i < length; i++) {
        char ch = str[i];

        // Check if the character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }
        // Check if the character is a consonant
        else if ((ch >= 'a' && ch <= 'z') && ch != ' ') { 
            consonants++;
        }
    }

    // Print counts of vowels and consonants
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
}

// Function to count digits and spaces in a string
void countDigitsAndSpaces(char str[]) {
    int a = 0, b = 0;
    int c = strlen(str);
    
    for (int i = 0; i < c; i++) {
        char d = str[i];
        // Check if the character is a digit
        if (d >= '0' && d <= '9') {
            a++;
        }
        // Check if the character is a space
        else if (d == ' ') {
            b++;
        }
    }

    // Print counts of digits and spaces
    printf("Number of digits: %d\n", a);
    printf("Number of spaces: %d\n", b);
}

int main() {
    char str1[1000], str2[1000];
    int choice = 0; 

    // Display menu
    printf("\n=== Welcome to String Operations ===\n");
    printf("1. Reverse a string\n");
    printf("2. Concatenate two strings\n");
    printf("3. Check if a string is a palindrome\n");
    printf("4. Copy a string\n");
    printf("5. Get the length of a string\n");
    printf("6. Count character frequency in a string\n");
    printf("7. Count vowels and consonants in a string\n");
    printf("8. Count digits and spaces in a string\n");
    

    // Get user choice
    printf("Enter your choice (1-8): ");
    scanf("%d", &choice);

    // Perform choice operation
    if (choice == 1) {
        printf("Enter a string: ");
        scanf("%s", str1);
        reverse(str1);
    } else if (choice == 2) {
        printf("Enter the first string: ");
        scanf("%s", str1);
        printf("Enter the second string: ");
        scanf("%s", str2);
        concatenate(str1, str2);
    } else if (choice == 3) {
        printf("Enter a string: ");
        scanf("%s", str1);
        palindrome(str1);
    } else if (choice == 4) {
        printf("Enter a string to copy: ");
        scanf("%s", str1);
        copy(str1, str2);
    } else if (choice == 5) {
        printf("Enter a string: ");
        scanf("%s", str1);
        printf("Length of the string: %d\n", getLength(str1));
    } else if (choice == 6) {
        printf("Enter a string: ");
        scanf("%s", str1);
        countCharacterFrequency(str1);
    } else if (choice == 7) {
        printf("Enter a string: ");
        scanf("%s", str1);
        countVowelsAndConsonants(str1);
    } else if (choice == 8) {
        printf("Enter a string: ");
        scanf("%s", str1);
        countDigitsAndSpaces(str1);
    } else {
        printf("Invalid choice. Please try again.\n");
    }
}
