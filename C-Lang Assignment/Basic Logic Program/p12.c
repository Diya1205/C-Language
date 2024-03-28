/*12.Accept number of students from user. I need to give 5 apples to each
student. How many apples are required?*/

#include<stdio.h>
int main(){
	int number,req_apple;
	printf("enter the number of students : ");
	scanf("%d",&number);
	
	req_apple = number*5;
	printf("number of required apples is : %d", req_apple);
	
}

