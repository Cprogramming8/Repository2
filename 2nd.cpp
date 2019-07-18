#include<stdio.h>
#include<limits.h>
int main()
{
	int n,i,s1,s2;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
     {

	scanf("%d",&a[i]);
     }
     s1=a[0];
	for(i=1;i<n;i++)
	{
		if(s1<a[i])
		{
			s2=s1;
			s1=a[i];
			
		}
	}

	printf("%d",s2);
	
	
}
