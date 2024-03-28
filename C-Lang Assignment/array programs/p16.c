/*13.Accept 5 numbers from user and perform sum of array*/
#include <stdio.h>

int main() {
    int numbers[5];
    int i, sum = 0;

    // Input 5 numbers into the array
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Calculate the sum of the elements in the array
    for (i = 0; i < 5; i++) {
        sum += numbers[i];
    }

    // Display the sum
    printf("\nThe sum of the numbers is: %d\n", sum);

    return 0;
}

