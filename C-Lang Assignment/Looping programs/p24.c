//24. 1 + 2 + 3 + 4 + 5 + ... + n

#include <stdio.h>

int main() {
    int n,i, sum = 0;

    // Accepting the value of n from the user
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Calculating the sum of the first n natural numbers
    for (i = 1; i <= n; i++) {
        sum += i;
    }

    // Displaying the sum
    printf("Sum of the first %d natural numbers = %d\n", n, sum);

    return 0;
}

