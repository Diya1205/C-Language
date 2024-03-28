//6. WAP to print Fibonacci series up to given numbers


#include <stdio.h>

// Function to generate Fibonacci series up to n terms
void fibonacci(int n) {
    int i, t1 = 0, t2 = 1, nextTerm;
    
    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i) {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
}

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    fibonacci(n);

    return 0;
}

