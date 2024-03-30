#include<stdio.h>
#include<string.h>

// Function prototypes

void revese(char *str);
void concatenate(char *str1, char *str2);
int palindrome(char *str);
void copy(char *source, char *destination);
int getLength(char *str);
void countCharacterFrequency(char *str);
void countVowelsAndConsonants(char *str);
void countDigitsAndSpaces(char *str);

int main(){
	char str1[1000], str2[1000], choice;
	int continueFlag = 1;
	
	do {
		//display menu
		printf("\n=== Welcome to String Operations ===\n");
        printf("1. Reverse a string\n");
        printf("2. Concatenate two strings\n");
        printf("3. Check if a string is a palindrome\n");
        printf("4. Copy a string\n");
        printf("5. Get the length of a string\n");
        printf("6. Count character frequency in a string\n");
        printf("7. Count vowels and consonants in a string\n");
        printf("8. Count digits and spaces in a string\n");
        printf("Enter your choice (1-8): ");
        
        
        // Input choice from the user
        scanf(" %c", &choice);

        if (choice == '1') {
            printf("Enter the string to reverse: ");
            scanf(" %[^\n]", str1);
            reverse(str1);
        } else if (choice == '2') {
            printf("Enter the first string: ");
            scanf(" %[^\n]", str1);
            printf("Enter the second string: ");
            scanf(" %[^\n]", str2);
            concatenate(str1, str2);
        } else if (choice == '3') {
            printf("Enter the string to check for palindrome: ");
            scanf(" %[^\n]", str1);
            if (Palindrome(str1))
                printf("Yes, the string is a palindrome.\n");
            else
                printf("No, the string is not a palindrome.\n");
        } else if (choice == '4') {
            printf("Enter the source string: ");
            scanf(" %[^\n]", str1);
            copy(str1, str2);
            printf("Copied string: %s\n", str2);
        } else if (choice == '5') {
            printf("Enter the string: ");
            scanf(" %[^\n]", str1);
            printf("Length of the string: %d\n", getLength(str1));
        } else if (choice == '6') {
            printf("Enter the string: ");
            scanf(" %[^\n]", str1);
            countCharacterFrequency(str1);
        } else if (choice == '7') {
            printf("Enter the string: ");
            scanf(" %[^\n]", str1);
            countVowelsAndConsonants(str1);
        } else if (choice == '8') {
            printf("Enter the string: ");
            scanf(" %[^\n]", str1);
            countDigitsAndSpaces(str1);
        } else {
            printf("Invalid choice! Please enter a number between 1 and 8.\n");
        }

        // Ask user if they want to continue
        printf("\nDo you want to perform another operation? (y/n): ");
        scanf(" %c", &choice);
        if (choice != 'y' && choice != 'Y')
            continueFlag = 0;

    } while (continueFlag);

    printf("Thank you for using the string operations application!\n");

    return 0;
}

// Function to reverse a string
void reverse(char *str) {
    int length = strlen(str);
    int i, j;
    char temp;

    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    printf("Reversed string: %s\n", str);
}

// Function to concatenate two strings
void concatenate(char *str1, char *str2) {
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);
}

// Function to check if a string is a palindrome
int Palindrome(char *str) {
    int length = strlen(str);
    int i, j;

    for (i = 0, j = length - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            return 0;
        }
    }
    return 1;
}

// Function to copy a string
void copy(char *source, char *destination) {
    strcpy(destination, source);
    printf("Copied string: %s\n", destination);
}

// Function to get the length of a string
int getLength(char *str) {
    return strlen(str);
}

// Function to calculate the frequency of each character in a string
void countCharacterFrequency(char *str) {
    int frequency[256] = {0}; // Assuming ASCII values
    int i, length = strlen(str);

    for (i = 0; i < length; i++) {
        frequency[(unsigned char)str[i]]++;
    }

    printf("Character frequency:\n");
    for (i = 0; i < 256; i++) {
        if (frequency[i] > 0) {
            printf("'%c' : %d\n", i, frequency[i]);
        }
    }
}

// Function to count vowels and consonants in a string
void countVowelsAndConsonants(char *str) {
    int vowels = 0, consonants = 0;
    int i, length = strlen(str);

    for (i = 0; i < length; i++) {
        char ch = tolower(str[i]); 

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        } else if (ch >= 'a' && ch <= 'z') {
            consonants++;
        }
    }
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
}

// Function to count digits and spaces in a string
void countDigitsAndSpaces(char *str) {
    int digits = 0, spaces = 0;
    int i, length = strlen(str);

    for (i = 0; i < length; i++) {
        char ch = str[i];

        if (isdigit(ch)) {
            digits++;
        } else if (isspace(ch)) {
            spaces++;
        }
    }
    printf("Number of digits: %d\n", digits);
    printf("Number of spaces: %d\n", spaces);
}
