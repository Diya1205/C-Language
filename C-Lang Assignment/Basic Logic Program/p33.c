//33.C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)

#include <stdio.h>

int main() {
    int num;

    // Input an integer from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Calculate and print the first three powers
    printf("First three powers of %d are:\n", num);
    printf("%d^1 = %d\n", num, num);
    printf("%d^2 = %d\n", num, num * num);
    printf("%d^3 = %d\n", num, num * num * num);


}

