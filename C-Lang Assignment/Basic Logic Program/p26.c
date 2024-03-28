/*26.Convert temperature Fahrenheit to Celsius*/

#include<stdio.h>
int main(){
	float fahrenhit,celsius=0;
	//input from user
	printf("enter value of fahrenhit :");
	scanf("%f",&fahrenhit);
	//formula to perform operation
	celsius = 0.55*(fahrenhit-32);
	
	//output
	printf("%f",celsius);

}
