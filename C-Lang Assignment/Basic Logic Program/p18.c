//18.Calculate person’s Annual salary
#include<stdio.h>
int main() {
    float monthlysal,annusal;
    

    // Input monthly salary
    printf("Enter the person's monthly salary: ");
    scanf("%f", &monthlysal);

    // Calculate annual salary
    annusal = monthlysal * 12;

    // Output the annual salary
    printf("The person's annual salary is: %f\n", annusal);

    
}
