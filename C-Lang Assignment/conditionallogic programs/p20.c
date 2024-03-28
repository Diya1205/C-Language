/*30.If bill exceeds Rs. 800 then a surcharge of 18% will be charged andthe
minimum bill should be of Rs. 256/-*/


#include <stdio.h>

int main() {
    float bill, surcharge, total_bill;

    // Input the bill amount
    printf("Enter the bill amount: ");
    scanf("%f", &bill);

    // Check if bill exceeds Rs. 800
    if (bill > 800) {
        // Calculate surcharge
        surcharge = 0.18 * bill;

        // Calculate total bill with surcharge
        total_bill = bill + surcharge;
    } else {
        // Total bill without surcharge
        total_bill = bill;
    }

    // Check if total bill is less than minimum
    if (total_bill < 256) {
        total_bill = 256;
    }

    // Output the total bill amount
    printf("Minimum bill amount: Rs. %f\n", total_bill);

    
}

