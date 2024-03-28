/*9. Write a program make a summation of given number (E.g., 1523 Ans: 11)*/

#include <stdio.h>

int sumNum(int num){
	int sum =0,digit,i;
	while(num != 0){
		
		
		digit = num%10;
		sum = sum + digit;
		num = num/10;
		
		
	}
	  printf("Summation of the digits: %d\n", sum);
	
	
}

int main(){
	
	int number;
	printf("enter number :");
	scanf("%d",&number);
	
	sumNum(number);
	
}

