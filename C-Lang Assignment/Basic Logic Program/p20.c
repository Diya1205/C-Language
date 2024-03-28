/*20.Accept monthly salary from the user and deduct 10% insurance premium,
10% loan installment find out of remaining salary*/

#include <stdio.h>

int main() {
    float monthlySalary, insurancePremium, loanInstallment, remainingSalary;

    // Input monthly salary
    printf("Enter the person's monthly salary: ");
    scanf("%f", &monthlySalary);

    // Calculate insurance premium
    insurancePremium = 0.1 * monthlySalary;

   
    // Calculate loan installment
    loanInstallment = 0.1 * monthlySalary;

    // Deduct loan installment
    remainingSalary = monthlySalary - loanInstallment - loanInstallment;

    // Output
    printf("The monthly salary after deducting insurance premium and loan installment is: %.2f\n", remainingSalary);


}
