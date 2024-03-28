//16.Convert country’s name in abbreviate form

#include <stdio.h>
#include <ctype.h>

int main() {
    char country_name[100];
    char abbreviation[4]; // Assuming abbreviation will have maximum 3 characters

    // Input the country's name
    printf("Enter the country's name: ");
    scanf("%s", country_name);

    // Convert the first character to uppercase
    abbreviation[0] = toupper(country_name[0]);

    // Find the first space and convert the next character to uppercase
    int i = 1;
    while (country_name[i] != '\0') {
        if (country_name[i] == ' ') {
            abbreviation[1] = toupper(country_name[i + 1]);
            break;
        }
        i++;
    }

    // Null-terminate the abbreviation
    abbreviation[2] = '\0';

    // Output the abbreviated form
    printf("Abbreviated form: %s\n", abbreviation);

    return 0;
}

