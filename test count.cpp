#include<stdio.h>
int main()
{
	int i,j,var1,var2,n,count=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
     {
     	scanf("%d",&a[i]);
	 }
    
	 for(i=0;i<n;i++)
	 {   var1=i*a[i];
	 	for(j=0;j<n;j++)
	 	{
	 		
	 		var2=j*a[j];
	 		if(var1>var2)
	 		{   
	 			count++;
	 			
			 }
		 }
		 
	 }
     printf("no. of pairs:%d",count);	 


}
