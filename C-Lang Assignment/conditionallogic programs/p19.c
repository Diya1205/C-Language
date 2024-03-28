/*19.Write a program in C to calculate and print the electricity bill of a given
customer. The customer ID, name, and unit consumed by the user should
be captured from the keyboard to display the total amount to be paid to the
customer. The charge are as follow :
 Unit  Charge/unit
upto 350  @1.20
 350 and above but less than 600 25. @1.50
600 and above but less than 800 27. @1.80
800 and above @2.00*/

#include<stdio.h>
int main(){
	
	int cus_id;
	char cus_name[20];
	float cunsumed_unit,total_amount;\
	
	//input from user
	printf("enter customer id\t");
	scanf("%d",&cus_id);
	
	printf("enter customer name\t");
	scanf("%s",&cus_name);
	
	printf("enter consumed unit by customer\t");
	scanf("%f",&cunsumed_unit);
	
	if(cunsumed_unit<350){
		
		total_amount = cunsumed_unit*1.20;
	}
	else if(cunsumed_unit>=350 && cunsumed_unit<600){
		total_amount = cunsumed_unit*1.50;
	}
	else if(cunsumed_unit>=600 && cunsumed_unit<800){
		total_amount = cunsumed_unit*1.80;
	}
	else{
		
			total_amount = cunsumed_unit*2;
	}
	
	printf("your bill is = %f",total_amount);
}
