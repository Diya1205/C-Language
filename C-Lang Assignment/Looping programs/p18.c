/*18.Write a C Program to Print the Multiplication Table of N
i. E.g. 5 * 1 = 5
ii. 5 * 2 = 10
1. .
2. .
iii. 5 * 10 = 50*/

#include <stdio.h>

int main() {
    int n,i;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    // Display the multiplication table
    printf("Multiplication table of %d:\n", n);
    for (i = 1; i <= 10; ++i) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

}

