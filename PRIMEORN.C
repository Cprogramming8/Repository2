#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,count=0;
  clrscr();
  printf("enter n value");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
   if(n%i==0)
   {
    count++;
   }
  }
  if(count==2)
  {
   printf("it is a prime number");
  }
  else
  {
   printf("not a prime number");
  }
  getch();
}
