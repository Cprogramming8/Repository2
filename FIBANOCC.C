#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n,first=0,second=1,next;
 clrscr();
 printf("enter n value");
 scanf("%d",&n);
 printf("first digit in fibanocci series:%d",first);
 printf("\nsecond digit in fibanocci series:%d",second);
 for(i=1;i<=n;i++)
 {
   next=first+second;
   first=second;
   second=next;
   printf("\n                                 %d",next);
 }

 getch();
}