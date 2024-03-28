/*13.WAP to find minimum number among 3 numbers using
ternary operator*/

#include <stdio.h>

int main() {
    int num1, num2, num3, min;

    // Accepting three numbers from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    min = (num1<num2) ? ((num1<num3) ? num1:num3) : ((num2<num3) ? num2 : num3);
    
    printf("minimum number is : %d",min);
}

