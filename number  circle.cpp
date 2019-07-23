#include<stdio.h>
int main()
{
	int n,rem=0,q=0,circle;
	scanf("%d",&n);
	rem=n%10;
	q=n/10;
	circle=rem*100+q;
	printf("%d",circle);
}
