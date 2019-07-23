#include<stdio.h>
int main()
{
	int i,n,fi,si,m,j,k,s,d,e;
printf("enter size of fir and sec ar");	
	scanf("%d%d",&n,&m);
	int a[n],b[m],c[m+n];
	printf("enter first and secong indexes");
	scanf("%d%d",&fi,&si);
	printf("enger main array elements");
	for(i=0;i<n;i++)
	
	{
		scanf("%d",&a[i]);
	}
	printf("enter sub array ele");
	for(j=0;j<m;j++)
	{
		scanf("%d",&b[j]);
	}
	j=0;
	k=0;
	for(i=0;i<(m+n);i++)
	{
        if(i==fi)
        {   
            s=a[i];
        	a[i]=b[0];
        	c[k]=a[i];
        	
        	j++;
        	k++;
		}
		else if(fi<i&&i<si)
		{
			d=a[i];
			a[i]=b[j];
				c[k]=a[i];
				
			j++;
			k++;
		}
		
        else if(i==si)
        {
        	e=a[i];
			a[i]=b[j];
			c[k]=a[i];
			k++;
	    }	
	    else if(i>=n)
	    {
	    	if(k==n)
	    	{
			
	    	c[k]=s;
	    	k++;
            }
        else if(k==n+1)
        {
        	c[k]=d;
            k++;        	
		}
		else 
		{
			c[k]=e;
			k++;
		}
	    	
	    	
	    }
	    else
	    {
		c[k]=a[i];
	    	
	    
	    k++;
        }
	}
    for(k=0;k<(m+n);k++)
    {
    	printf("%d",c[k]);
	}
}
