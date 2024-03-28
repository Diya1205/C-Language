/*1. Write a program to find out the max number from given array using function*/
#include <stdio.h>

 int Max(int arr[]){
 	int i,max=0,tem;
 	for (i=0;i<5;i++){
 		printf("%d\n",arr[i]);
 		if(arr[i]>max){
 			tem=arr[i];    
 			arr[i]=max;
 			max=tem;
		 }
	 }
	 printf("max :%d",max);
 }
 int main(){
 	int arr[5];
 	int i;
 	for(i=0;i<5;i++){
 		printf("Enter the num :");
 		scanf("%d",&arr[i]);
}
Max(arr);
}
	 
 
