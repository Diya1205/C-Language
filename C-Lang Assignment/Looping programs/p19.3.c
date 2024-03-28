//19.pattern3

#include<stdio.h>
 int main()
 {
  int n,i,j,sp;
  printf("Enter Number of Rows");
  scanf("%d",&n);
  for(i=1; i<=n; i++)
  {
   for(sp=n-i; sp>=1; sp--)
       printf(" ");
   for(j=i; j>=1; j--)
        printf("*");
   for(j=i; j>1; j--)
        printf("*");
   printf("\n");
  }
  
  
 }
 
