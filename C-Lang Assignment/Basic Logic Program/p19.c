//19.Calculate compound interest

#include<stdio.h>
int main(){
	float amount,principal,compoundInterest;
	//user input of amount and principal
	printf("enter amount and principal ");
	scanf("%f %f", &amount ,&principal);
	//output
	compoundInterest = amount - principal;
	
	printf("compoundInterest is : %f",compoundInterest);
	
}
