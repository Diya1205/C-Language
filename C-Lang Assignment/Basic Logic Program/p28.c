//28.Convert years into days and months


#include <stdio.h>

int main() {
    int years,months,days;
   

    // Accepting number of years
    printf("Enter number of years: ");
    scanf("%d", &years);

    // Converting years into months and days
    months = years * 12;
    days = years * 365;

    // Displaying the result
    printf("%d years is equal to %d months and %d days.\n", years, months, days);


}
