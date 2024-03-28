/*9. WAP to show difference between Structure and Union.*/
#include <stdio.h>
// Structure definition
struct Person {
    char name[50];
    int age;
};
// Union definition
union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    // Structure usage
    struct Person person;
    strcpy(person.name, "John");
    person.age = 30;

    printf("Person's name: %s\n", person.name);
    printf("Person's age: %d\n", person.age);

    // Union usage
    union Data data;
    data.i = 10;
    printf("Data as integer: %d\n", data.i);

    data.f = 3.14;
    printf("Data as float: %.2f\n", data.f);

    strcpy(data.str, "hello");
    printf("Data as string: %s\n", data.str);

    return 0;
}

