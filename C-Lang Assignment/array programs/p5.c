/*5.WAP to take two Array input from user and sort them in ascending or
descending order as per user’s choice*/
#include<stdio.h>
int main(){
	// a[5]= 2 1 3 4 5 ------> 5 4 3 2 1 
	int a[5],i,j,temp;
	printf("Enter array Elements: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);//2 1 3 4 5
	}
	for(i=0;i<5;i++)// i=0
	{
		for(j=i+1;j<5;j++)// j= 1
	{
		if(a[i]<a[j])
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
  }
}
printf("Array Elements : ");
for(i=0;i<5;i++)
{
	printf("%d",a[i]);//1 2 3 4 5
}
return 0;
}
