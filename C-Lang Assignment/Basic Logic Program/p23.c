/*23.WAP to calculate swap 2 numbers with using of multiplication and
division.*/

#include<stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Swapping using multiplication and division
    a = a * b;  
    b = a / b;  
    a = a / b;  

    // Output the swapped numbers
    printf("After swapping, the numbers are: %d %d\n", a, b);


}
