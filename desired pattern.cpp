#include<stdio.h>
int main()
{
	int i,j,n,k;
	printf("enter n value");
	scanf("%d",&n);
	for(i=0;i<2*n-1;i++)
	{
		k=i>n?n-i%n:i;
		for(j=0;j<=k;j++)
		{
			printf("*");
		}
			printf("\n");
	}
	
}
