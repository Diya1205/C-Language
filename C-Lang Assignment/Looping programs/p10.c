 /*10.Write a program you have to make a summation of first and last
Digit. (E.g., 1234 Ans: -5)*/

#include<stdio.h>
int sumNum(int num){
	int firstDigit,lastDigit;
	firstDigit = num;
	//extracrt first digit 
	while(firstDigit>=10){
		
	firstDigit = firstDigit/10;
	}
	//last digit 
	lastDigit = num%10;
	
	return firstDigit+lastDigit;
	
}
int main(){
	
	int number;
	printf("enter number : ");
	scanf("%d",&number);
	
	int sum = sumNum(number);
	printf("sum of first and last digits is  : %d ",sum);
	
}

