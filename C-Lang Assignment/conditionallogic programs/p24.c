/*34. Accept month number and display month name*/

#include <stdio.h>

int main() {
    int month_number;

    // Input the month number
    printf("Enter the month number (1-12): ");
    scanf("%d", &month_number);

    // Print the month name 
    switch (month_number) {
        case 1:
            printf("month: january\n");
            break;
        case 2:
            printf("month: february\n");
            break;
        case 3:
            printf("month: march\n");
            break;
        case 4:
            printf("month: april\n");
            break;
        case 5:
            printf("month: may\n");
            break;
        case 6:
            printf("month: june\n");
            break;
        case 7:
            printf("month: july\n");
            break;
         case 8:
            printf("month: august\n");
            break;
        case 9:
            printf("month: september\n");
            break;
        case 10:
            printf("month: october\n");
            break;
        case 11:
            printf("month: november\n");
            break;
		case 12:
            printf("month: december\n");
            break; 	    
            
        default:
            printf("Invalid month number!\n");
    }


}

