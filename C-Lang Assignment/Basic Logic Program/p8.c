/* 8) Find circumference of Rectangle formula : C = 4 * a */

#include <stdio.h>

int main() 
{
    float side, circumference;

    printf("Enter the side length of the square: ");
    scanf("%f", &side);

    circumference = 4 * side;
    
    printf("The circumference of the square is: %.2f\n", circumference);

    return 0;
}
