#include<stdio.h>
int main()
{
	int marks[10],sum=0,j=0,k=0,count=0,i,average[10];
	float class_avg=0;
	for(i=0;i<10;i++)
	{
		scanf("%d",&marks[i]);
        sum=sum+marks[i];		
	}
	
	printf("%d",sum);
	class_avg=(sum/10)*100;
	for(i=0;i<10;i++)
	{
		
	    average[j]=(marks[i]/25)*100;
	    j++;
	}
	for(j=0;j<10;j++)
	{
		/*if(average(j)>class_avg)
		{
			/*high[k]=average[j];
			k++;
			count++;
		}*/
		printf("%d",average[j]);
		
	}
	/*printf("%d",count);*/
	/*big=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>a[0])
          {
          	big=a[i];
          	
		  }*/

	
	
	
	
	
}
