#include <stdio.h>

int main() {
    int choice, dayNumber, ch;

    // Part (i): Monday to Sunday using switch case
    printf("Choose an option:\n");
    printf("1. Display Days of the Week\n");
    printf("2. Check Vowel or Consonant\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter a number between 1 and 7: ");
            scanf("%d", &dayNumber);

            switch (dayNumber) {
                case 1:
                    printf("Monday\n");
                    break;
                case 2:
                    printf("Tuesday\n");
                    break;
                case 3:
                    printf("Wednesday\n");
                    break;
                case 4:
                    printf("Thursday\n");
                    break;
                case 5:
                    printf("Friday\n");
                    break;
                case 6:
                    printf("Saturday\n");
                    break;
                case 7:
                    printf("Sunday\n");
                    break;
                default:
                    printf("Invalid day number\n");
            }
            break;

        case 2:
            printf("Enter a character: ");
            scanf(" %c", &ch);

            ch = tolower(ch); 

            switch (ch) {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    printf("%c is a vowel\n", ch);
                    break;
                default:
                    printf("%c is a consonant\n", ch);
            }
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}

