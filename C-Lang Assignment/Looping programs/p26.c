//26. (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)

#include <stdio.h>

int main() {
    int n,j,i;
    int sum = 0, subSum = 0;

    // Accepting the value of n from the user
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Calculating the sum of the series
    for (i = 1; i <= n; i++) {
        subSum = 0;
        for (j = 1; j <= i; j++) {
            subSum += j;
        }
        sum += subSum;
    }

    // Displaying the sum
    printf("Sum of the series = %d\n", sum);

    return 0;
}

