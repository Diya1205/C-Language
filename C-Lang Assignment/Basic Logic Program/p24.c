/*.24.Accept 5 employees name and salary and count average and total
salary */

#include<stdio.h>
int main(){
char name1[50], name2[50], name3[50], name4[50], name5[50];
    float salary1, salary2, salary3, salary4, salary5;
    float total_salary, average_salary;

    // Accepting names and salaries
    printf("Enter name and salary of Employee 1:\n");
    scanf("%s %f", name1, &salary1);
    printf("Enter name and salary of Employee 2:\n");
    scanf("%s %f", name2, &salary2);
    printf("Enter name and salary of Employee 3:\n");
    scanf("%s %f", name3, &salary3);
    printf("Enter name and salary of Employee 4:\n");
    scanf("%s %f", name4, &salary4);
    printf("Enter name and salary of Employee 5:\n");
    scanf("%s %f", name5, &salary5);

    // Calculating total salary
    total_salary = salary1 + salary2 + salary3 + salary4 + salary5;

    // Calculating average salary
    average_salary = total_salary / 5;

    // Displaying total and average salary
    printf("\nTotal salary: %.2f\n", total_salary);
    printf("Average salary: %.2f\n", average_salary);

	
	
}
