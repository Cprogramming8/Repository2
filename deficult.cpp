#include<stdio.h>
int main()
{
	int i,n,st,j,k;
	scanf("%d",&n);
	for(i=0;i<2*n-1;i++)
	{
		k=i>n?(n-i/n):i;
		if(k==n-i)
		{
          for(j=n-i;j<n;j++)
          {
          	printf(" ");
		  }
		  for(st=0;st<n-i;st++)
		  {
		  	printf("*");
		  }
		}
		/*else
		{
			for(j=0;j<n;j++)
			{
				printf("*");
			}
		}*/
		printf("\n");
	}
}
