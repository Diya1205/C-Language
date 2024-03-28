/*21.Accept 2 numbers from user and swap 2 numbers  without using 3rd variable*/

#include<stdio.h>
int main(){
	int a,b;
	//user input
	printf("enter two numbers");
	scanf("%d %d",&a,&b);
	//without using third variable
    a = a + b;
    b = a - b;
    a = a - b;

     
	//output
	printf("after swaping %d %d",a,b);
	
	
}

