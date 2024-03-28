/*7. WAP to print number in reverse order e.g.: number = 64728 --->
reverse =82746*/

#include<stdio.h>
void reverse(int num){
	int reversed = 0;
	
	
	while(num != 0){
		int digit = num%10;
		reversed = reversed*10 + digit;
		num /= 10;
		
	}
	
	printf("reverse number is : %d",reversed);
}

int main(){
	int number;
	printf("enter number :");
	scanf("%d",&number);
	
	reverse(number);
}

