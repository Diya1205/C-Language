/*7. WAP Find out length of string without using inbuilt function*/
#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: \n");
    scanf("%s", str);

    // Loop through each character until '\0' is encountered
    while (str[length] != '\0') {
        length++;
    }

    printf("Length of input string: %d", length); 

    return 0;
}

