//29.Convert minutes into seconds and hours

#include <stdio.h>

int main() {
    
    int hours, seconds,minutes;

    // Accepting the number of minutes
    printf("Enter number of minutes: ");
    scanf("%d", &minutes);

    // Converting minutes into hours and seconds
    hours = minutes / 60;
    seconds = minutes * 60;

    //  result
    printf("%d minutes is equal to %d hours and %d seconds.\n", minutes, hours, seconds);


}


