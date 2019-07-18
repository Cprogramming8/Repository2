#include<stdio.h>
int main()
{
	int i,n,sum=0,sum2=0,small,k=0,small1;
	scanf("%d",&n);
	int a[n],b[n/2],c[n/2];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<n/2;i++)
	{
		b[i]=a[i];
		printf("%d",b[i]);
		sum=sum+b[i];
	}
	printf("sum1:%d",sum);
     printf("b[0] is= :%d",b[0]);
     small=b[0];
	for(i=1;i<n/2;i++)
	
	{
		if(b[i]<small)
		{
			small=b[i];
		}
	}
     printf("small of first half=%d",small);
    
 
	
	printf("\n");
    for(i=n/2;i<n;i++)
    {
    	c[k]=a[i];
    	printf("%d",c[k]);
    	sum2=sum2+c[k];
    	k++;
	}
	printf("sum2=%d",sum2);
	
/*	printf("%d",c[0]);
	printf("%d",c[1]);*/
	
    small1=c[0];
	for(k=1;k<n/2;k++)
	{
		if(c[k]<small1)
		 small1=c[k];
	}
	printf("small of second array is %d",small1);		

}


