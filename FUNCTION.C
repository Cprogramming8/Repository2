#include<stdio.h>
#include<conio.h>
int sum();
void main()
{
 clrscr();
 printf("sum of two numbers is %d",sum());
 getch();
}
int sum()
{
 int num1,num2;
 printf("enter num1,num2");
 scanf("%d%d",&num1,&num2);

 return num1+num2;
}