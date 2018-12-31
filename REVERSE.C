#include<stdio.h>
#include<conio.h>
void main()
{
 int rev,n,r;
 clrscr();
 printf("enter n value");
 scanf("%d",&n);
 while(n!=0)
 {
  r=n%10;
  n=n/10;
  rev=r;



  if(rev%2==0)
  {
   printf("%d=even",rev);
  }
  else
  {
   printf("%d=odd",rev);
  }

 }
 getch();
}