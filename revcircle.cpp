#include<stdio.h>
int main()
{
	int j=1,i,n;
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	b[0]=a[n-1];
	for(i=0;i<n;i++)
	{
		b[j]=a[i];
		j++;
	}
	for(j=0;j<n;j++)
  {
  	printf("%d",b[j]);
  }

}
