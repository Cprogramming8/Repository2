#include<stdio.h>
int main()
{
	int i,n,j,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i/2;j++)
		{
			if(i%j==0)
			{
				sum=sum+j;
			}
		
			
	    } 
	    
				
		if(sum>i)
			{
				printf("%d\n",i);
				
			}
			sum=0;
	}
}

