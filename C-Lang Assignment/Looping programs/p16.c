//16.Calculate the Sum of Natural Numbers Using the While Loop

#include <stdio.h>

int main() {
    int n,sum = 0,i = 1;
   

    
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    
    if (n <= 0) 
	{
        printf("Please enter a positive integer.\n");
        return 1; 
    }

    // Using a while loop to calculate the sum of natural numbers up to n
    while (i <= n) 
	{
        sum += i; // Add the current number to the sum
        i++;     
    }

    
    printf("Sum of natural numbers up to %d is: %d\n", n, sum);


}

