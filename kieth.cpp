#include<stdio.h>
int main()
{
	int n,rem,sum,k,rem1,sum1;
	scanf("%d",n);
	k=printf("%d",n);
	while(n!=0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	while(n!=0)
	 {
	 	rem1=n%10;
	 	sum1=sum1+rem1;
	 	n=n/10;
	 	if(n==k-1)
	 	{
	 		break;
		}
	 }
/*	 if(sum1==sum)
	 {
	 	break;
	 }
	 else
	 {
	 	sum1=sum+sum1;
	 }
	 
	 else if(sum1==n)
	 {
	 	printf("yes");
	 }
	 else
	 {
	 	printf("no");
	 }*/
	 
	 
}
