//5. WAP to print factorial of given number

#include<stdio.h>

int main(){
	
	int num,fact=1,i;
	
	printf("enter number :");
	scanf("%d",&num);
	
	if(num<0){
		printf("factorial of negative number does not exist");
		}
		
	else{
		
		for(i=1;i<=num;i++){
		   fact *= i;	
			
		}
		printf("factorial of given %d = %d",num,fact);
	}	
	


}
