//27. 1/2 - 2/3 + 3/4 - 4/5 + 5/6 ..........n

#include <stdio.h>

int main() {
    int n,i;
    float sum = 0;

    // Accepting the value of n from the user
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Calculating the sum of the series
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            // Subtract the term if i is even
            sum -= (float)i / (i + 1);
        } else {
            // Add the term if i is odd
            sum += (float)i / (i + 1);
        }
    }

    // Displaying the sum
    printf("Sum of the series = %f\n", sum);

    return 0;
}

