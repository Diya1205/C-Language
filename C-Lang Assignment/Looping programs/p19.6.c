//19.pattern6

#include <stdio.h>

int main() {
    int rows,i,j, number = 1;

    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Outer loop for rows
    for ( i = 1; i <= rows; i++) {
        // Inner loop for printing numbers
        for ( j = 1; j <= i; j++) {
            printf("%d ", number);
            number++;
        }
        printf("\n"); 
    }

    
}

