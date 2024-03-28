/*2. Write a program in C to separate individual characters from a string*/
#include <string.h>
int main() {
char str[90]=" ";
int l=0;
scanf("%s",str);
while (str[l]!='\0'){
printf("%c ",str[l]);
l++;
}
}
