/*22.Calculate compound interest (Compound Interest formula:
a. Formula to calculate compound interest annually is given by:
Amount= P(1 + R/100)t
b. Compound Interest = Amount – P*/
#include<stdio.h>
int main() {
    float principal, rate, time, compoundInterest;

    // Input principal amount, rate of interest, and time
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the rate of interest (in percentage): ");
    scanf("%f", &rate);
    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    // Calculate compound interest
    compoundInterest = principal * (pow((1 + rate / 100), time)) - principal;

    // Output the compound interest
    printf("The compound interest is: %f\n", compoundInterest);


}

