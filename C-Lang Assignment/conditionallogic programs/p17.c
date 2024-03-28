/*17.Write a C program to check whether a triangle can be formed with the given
values for the angles.*/

#include <stdio.h>

int main() {
    int angle1, angle2, angle3;

    // angle input
    printf("Enter the three angles of the triangle: ");
    scanf("%d %d %d", &angle1, &angle2, &angle3);

    // Checking conditions 
    if (angle1 + angle2 + angle3 == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0) {
        printf("The given angles can form a triangle.\n");
    } else {
        printf("The given angles cannot form a triangle.\n");
    }


}

