/*4. WAP to print table up to given numbers*/

#include<stdio.h>

int main(){
	int number,i;
	printf("enter number which you want to table:");
	scanf("%d",&number);
	printf("Table of %d:\n", number);
	
	
	for(i=1;i<=10;i++){
		printf("%d X %d = %d\n",number,i,number*i);
		
	}
	

    
   
    

}
