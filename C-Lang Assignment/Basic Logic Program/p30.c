//30.WAP to convert years into days and days into years

#include <stdio.h>

int main() {
    int years, days;

    // Convert years to days
    printf("Enter number of years: ");
    scanf("%d", &years);
    days = years * 365;
    printf("%d years is equal to %d days.\n", years, days);

    // Convert days to years
    printf("Enter number of days: ");
    scanf("%d", &days);
    years = days / 365;
    printf("%d days is approximately equal to %d years.\n", days, years);

    
}

