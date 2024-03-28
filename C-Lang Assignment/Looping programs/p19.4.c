//19.pattern4

 #include<stdio.h>
int main(){

        int i,j,k,row;
       printf("enter rows");
        scanf("%d",&row);
       for(i=1; i<=row; i++)
    {
        
      
        for(k=1; k<=i; k++)
        { 
            printf("*");
        }

       
        printf("\n");
    }
        for(i=1; i<=row; i++)
    {
        
      
        for(k=1; k<=row-i; k++)
        { 
            printf("*");
        }

       
        printf("\n");
    }
}
