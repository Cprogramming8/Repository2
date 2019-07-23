#include<stdio.h>
int main()
{   
    int rem=0,n,count=0,array[10],i,rem1=0,nm,sum1=0,sum=0;
    scanf("%d",&n);
    nm=n;
	while(n!=0)
	{
		rem=n%10;
		n=n/10;
		count++;
	}
	printf("%d\n",count);
	
	for(i=0;i<=count-1;i++)
	{
		rem1=nm%10;
		array[i]=rem1;
		nm=nm/10;
	}
	for(i=0;i<=count-1;i++)
	{
		printf("%d\n",array[i]);
	}
		for(i=0;i<=count-1;i++)
	{
		sum=sum+array[i];
	}
	printf("%d\n",sum);
		
		for(i=0;i<=count-1;i++)
	    {
	
	     if(sum==n)
	        {
	          	printf("yes");
	          	break;
	        }
	     else
	        {
	
	
            	for(i=0;i<count-1;i++)
                   {
                      if(i!=count-1)
                        {
                                 	array[i]=array[i+1];
		                }
		              else
		                {
		                         	array[i]=sum;
		                }
		           }
                for(i=0;i<count--;i++)
	              {
	                  sum1=array[i];
                  }
                      
                  
			}
			sum=sum1;    
	}
   printf("%d\n",sum);
}
	

