//27.Convert days into months

#include <stdio.h>

int main() {
    int days;
    float months;

    // Accepting number of days
    printf("Enter number of days: ");
    scanf("%d", &days);

    // Calculating months
    months = days / 30;

    // Displaying the result
    printf("%d days is approximately %.2f months.\n", days, months);

    
}
