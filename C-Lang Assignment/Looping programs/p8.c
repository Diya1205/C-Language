#include <stdio.h>


int Maxx(int number) {
    int max = 0;
    
    
    while (number > 0) {
        int digit = number % 10;
        if (digit > max) {
            max = digit;
        }
        number /= 10;
    }
    
    return max;
}

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    int maximum = Maxx(number);
    
    printf("Maximum number is: %d\n", maximum);
    
}

