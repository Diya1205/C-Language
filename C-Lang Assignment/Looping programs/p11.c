//11.Accept 5 names from user at run time

#include<stdio.h>
int main(){
	
	int i;
	char name[20];
	
	for(i=0;i<5;i++){
		
		printf("enter name:\n");
		scanf("%s",&name);
		
		printf("your name is : %s\n",name);
	}
	
}
