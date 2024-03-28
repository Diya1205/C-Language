/*3. WAP to take 10 no. Input from user find out below values
a. How many Even numbers are there
b. How many odd numbers are there
c. Sum of even numbers
d. Sum of odd numbers*/

#include<stdio.h>
int main(){
	int i,number,sum_even=0,sum_odd=0,count_even=0,count_odd=0;
	for(i=0;i<10;i++){
	
	printf("enter number: ");
	scanf("%d",&number);
 
 if(number%2 == 0){
 	 
 	 sum_even = sum_even + number;
 	 count_even = count_even+1;
 	 
 	
 }
 
 else
{
	sum_odd = sum_odd + number;
	count_odd = count_odd+1;
	 
}
}
printf("total even number is : %d \n ",count_even);
printf("total odd number is : %d \n ",count_odd);
printf("sum of even number is : %d \n ",sum_even);
printf("sum of odd number is : %d \n ",sum_odd);

}
