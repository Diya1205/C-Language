/*17.Calculate person’s insurance premium based on salary*/

#include <stdio.h>

int main() {
    float salary, percentage, premium;

    // Input salary and percentage
    printf("Enter the person's salary: ");
    scanf("%f", &salary);
    printf("Enter the percentage of salary to be paid as premium: ");
    scanf("%f", &percentage);

    // Calculate premium
    premium = (salary * percentage) / 100.0;

    // Output the premium
    printf("The insurance premium for a salary of %f with a premium rate of %f is: %f\n", salary, percentage, premium);
}
