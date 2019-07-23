#include<stdio.h>
int main()
{
	int r,n,j,i;
	scanf("%d",&n);
	num=n;
	
	  
	for(r=1;r<=2*num-1;r++)
	{
		if(r==1||r==2*n-1)
		{
			for(j=1;j<=2*num-1;j++)
			{
				printf("%d",num);
			}
		}
		else
		{
			for(j=1;j<=2*num-1;j++)
			{
				if(j==1 || j==2*n-1)
                 printf("%d",num);
                 else
                 {
                 	for(j=2;j<2*num-1;j++)
                 	{
                 		printf("%d",n-1);
					 }
				 }
                 
        
			}
			
		}
		n--;
		printf("\n");
	}
	
	return 0;
}
