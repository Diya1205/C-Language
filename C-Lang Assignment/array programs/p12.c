/*12.WAP to accept 5 students name and store it in array*/
#include <stdio.h>
#include <string.h>

int main() {
    char names[5][50]; // Array to store names of 5 students
    int i;

    // Accept names of 5 students from the user
    printf("Enter names of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", names[i]);
    }

    // Display the names of students
    printf("\nNames of students:\n");
    for (i = 0; i < 5; i++) {
        printf("%d. %s\n", i + 1, names[i]);
    }

    return 0;
}

