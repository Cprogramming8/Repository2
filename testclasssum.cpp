#include<stdio.h>
int main()
{
	int marks,n=10,sum=0,average_of_classmembers,j=0;
	int a[n],b[n];
	for(marks=0;marks<n;marks++)
	{
		scanf("%d",&a[marks]);
	}
	for(marks=0;marks<n;marks++)
	{
		sum=sum+a[marks];
		b[j]=(a[marks]/25)*100;
		j++;
	}
	
	
	for(j=0;j<n;j++)
	{
		
	}
	printf("sum=%d",sum);
	average_of_classmembers=(sum/n)*100;
	
	printf("%d",average_of_classmembers);
	
}

