/*17.WAP to show difference between Structure and Union.*/
#include <stdio.h>
// Define a structure
struct Point {
    int x;
    int y;
};
// Define a union
union Data {
    int intValue;
    float floatValue;
};
int main() {
    // Structure example
    struct Point p;
    p.x = 10;
    p.y = 20;
    printf("Structure: x = %d, y = %d\n", p.x, p.y);
    // Union example
    union Data d;
    d.intValue = 10;
    printf("Union: intValue = %d\n", d.intValue);
    d.floatValue = 3.14;
    printf("Union: floatValue = %.2f\n", d.floatValue);
    return 0;
}-
