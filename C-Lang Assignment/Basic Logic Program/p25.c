/*25.Accept 5 expense from user and find average of expense*/

#include<stdio.h>
int main(){

    float exp1, exp2, exp3, exp4, exp5;
    float total_exp, average_exp;

    // Accepting expence
    printf("Enter the exp1:\n");
    scanf("%f", &exp1);
    printf("Enter the exp2:\n");
    scanf("%f", &exp2);
    printf("Enter the exp3:\n");
    scanf("%f", &exp3);
    printf("Enter the exp4:\n");
    scanf("%f", &exp4);
    printf("Enter the exp5:\n");
    scanf("%f", &exp5);

    // Calculating total exp
    total_exp = exp1+exp2+exp3+exp4+exp5;

    // Calculating average exp
    average_exp = total_exp / 5;

    // Displaying  average exp
   
    printf("Average expense: %.2f\n", average_exp);

	
}
