#include<stdio.h>
int main()
{
	int n,i,j=0,k=0,fi,si;
	printf("enter size of array");
	scanf("%d",&n);
	//int a[n],b[si-fi],c[n-2];
	printf("enter index values");
	scanf("%d%d",&fi,&si);
		int a[n],b[n-(si-fi+1)],c[n-(si-fi+1)];
	printf("enter aray values");
	for(i=0;i<n;i++)	
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(i==fi||(fi<i&&i<si)||i==si)
		{
			b[j]=a[i];
			j++;
		}
		else
		{
			c[k]=a[i];
			k++;
		}
	}
	for(k=0;k<n-(si-fi+1);k++)
	{
	printf("%d",c[k]);
    }
}
