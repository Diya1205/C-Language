/*35. Accept the input month number and print number of days in that 
month.*/

#include <stdio.h>

int main() {
    int month;

    // Accepting input month number from the user
    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    // Checking month number and printing number of days
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        printf("Number of days: 31\n");
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        printf("Number of days: 30\n");
    else if (month == 2)
        printf("Number of days: 28 or 29 (depending on leap year)\n");
    else
        printf("Invalid month number!\n");

    return 0;
}

