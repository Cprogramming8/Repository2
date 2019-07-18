#include<stdio.h>
int main()
{
	int i,n,s1=0,s2=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	if(a[i]>s1)
	{
		s2=s1;
		s1=a[i];
	}
  
}
printf("%d is 2nd largest",s2);
}
