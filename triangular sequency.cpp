#include<stdio.h>
int main()
{
	int i,n,j,sum=0;
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
	    for(j=0;j<i;j++)
	    {
           sum=sum+j;	    	
		}
		
		printf("%d\n",sum+i);
		sum=0;
	}
}
