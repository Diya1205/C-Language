//25. (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)

#include <stdio.h>

int main() {
    int n,i;
    unsigned long long sum = 0;

    // Accepting the value of n from the user
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Calculating the sum of squares of the first n natural numbers
    for (i = 1; i <= n; i++) {
        sum += (unsigned long long)i * i; // Using unsigned long long to handle larger values
    }

    // Displaying the sum
    printf("Sum of squares of the first %d natural numbers = %llu\n", n, sum);

    return 0;
}

