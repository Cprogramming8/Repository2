#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	int a[n],b[n],c[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<n;i++)
	{			  	
		if(i%2==0)
		{
			b[i/2]=a[i];
	        	
		printf(" %d",b[i/2]);
		}
			
		
	}
	for(i=0;i<n;i++)
	{
	
				  	
		if(i%2!=0)
		{
			c[i/2]=a[i];
	        printf("\n%d",c[i/2]);	
		}
		
	}
    
	}
	
		
	
	
	/*for(i=0;i<n;i++)
	{
		printf("%d",b[i]);
	}*/
/*	for(i=0;i<n;i++)
	{
		printf("%d",c[i]);
	}
*/	
	


