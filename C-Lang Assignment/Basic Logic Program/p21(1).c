/*21.Accept 2 numbers from user and swap 2 numbers with using 3rd variable
*/

#include<stdio.h>
int main(){
	int a,b,swap;
	//user input
	printf("enter two numbers");
	scanf("%d %d",&a,&b);
	//with using third variable
	swap=a;
	a=b;
	b=swap;
//output	
	printf("after swaping %d %d",a,b);
	
	
}

