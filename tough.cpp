#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=2*n-1;i++)
	{
		if(i==1||i==2*n-1)
		{
			for(j=1;j<=2*n-1;j++)
               {
               	printf("%d",n);
			   }

		}
		else if(i==2||i==2*n-2)
		{
			for(j=1;j<=2*n-1;j++)
			{
				if(j==1||j==2*n-1)
				{
					printf("%d",n);
					
				}
				else 
				{
					printf("%d",n-1);
				}
			}
		}
		else if(i==3||i==2*n-3)
		{
			for(j=1;j<=2*n-1;j++)
			{
				if(j==1||j==2*n-1)
				{
					printf("%d",n);
				}
				else if(j==2||j==2*n-2)
				{
					printf("%d",n-1);
				}
				else 
				{
					printf("%d",n-2);
				}
			}
		}
		else if(i==4)
		{
          
	         for(j=1;j<=2*n-1;j++)
			    {
				if(j==1||j==2*n-1)
				{
					printf("%d",n);
				}
				else if(j==2||j==2*n-2)
				{
					printf("%d",n-1);
				}
				else if(j==3||j==2*n-3)
				{
					printf("%d",n-2);
				}
				else
				{
					printf("%d",n-3);
				}

		      }
	     } 
	     printf("\n");
	 }

}
