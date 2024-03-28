 /*b. Write a program of structure for five employee that
provides the following information -print and display
empno, empname, address andage*/
#include <stdio.h>
#include <string.h>

// Function to reverse a string
void reverseString(char *str) {
    int length = strlen(str);
    int i,j;
    for (i = 0, j = length - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

// Function to check if a string is a palindrome
int isPalindrome(const char *str) {
    int length = strlen(str);
    int i,j;
    
    for (i = 0, j = length - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            return 0; // Not a palindrome
        }
    }
    return 1; // Palindrome
}

// Structure definition for employee
struct Employee {
    int empno;
    char empname[50];
    char address[100];
    int age,i;
};

// Function to print employee information
void printEmployee(struct Employee emp) {
    printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Address: %s\n", emp.address);
    printf("Age: %d\n", emp.age);
}
int main() {
    // Reverse a string and check if it's a palindrome
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    reverseString(str);
    printf("Reversed string: %s\n", str);
    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    // Employee information
    struct Employee emp1 = {1234, "John Doe", "123 Street, City", 30};
    printf("\nEmployee Information:\n");
    printEmployee(emp1);

    return 0;
}
