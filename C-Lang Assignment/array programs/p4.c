/*4.WAP to find factorial using recursion*/
 #include<stdio.h>
 int main(){
   	int num,fact;
 	printf("\n Enter the number : ");
 	scanf("%d",&num);
   	fact = factorial(num);
   	printf("\n Factorial of %d = %d",num,fact);
return 0;
}
int factorial(int num)
{
	int fact;
if(num == 1)	
{
	return 1;
}
else
{
fact = num * factorial(num-1);
return fact;	
}

}


