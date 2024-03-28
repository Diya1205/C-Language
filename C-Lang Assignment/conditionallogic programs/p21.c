/*31. Write a program in C to read any Month Number in integer and display the
number of days for this month.*/

#include <stdio.h>

int main() {
    int month;

    // Input the month number
    printf("Enter the month number: ");
    scanf("%d", &month);

    // condition accroding month
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        printf("Number of days: 31\n");
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        printf("Number of days: 30\n");
    } else if (month == 2) {
        printf("Number of days: 28 or 29\n");
    } else {
        printf("Invalid month number!\n");
    }
}



