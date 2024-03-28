/*5) Find Area of Cube formula : a = 6a2 */

#include <stdio.h>
int main(){
    int side;
    float area;
    
    printf("Enter the side of the cube: ");
    scanf("%d", &side);
    
    area = 6 * side * side;

    printf("Surface Area of Cube: %.2f", area);
    return 0;
}
