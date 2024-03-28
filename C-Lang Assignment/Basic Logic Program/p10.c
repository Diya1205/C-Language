/*10.find the area of a rectangular prism formula : A=2(wl+hl+hw)*/

#include<stdio.h>
int main(){
	int area,w,h,l;
	printf("enter value of w and h and l\t");
	scanf("%d %d %d",&w,&l,&h);
	
	area = 2*((w*l)+(h*l)+(h*w));
	printf("area of rectangular prism is : %d", area);
	
}
