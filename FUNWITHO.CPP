 #include<stdio.h>
#include<conio.h>
void sum();
void main()
{
 clrscr();
 sum();
 getch();
}
void sum()
{
 int num1,num2;
 printf("enter num1,num2");
 scanf("%d%d",&num1,&num2);

 printf("the sum of %d and %d is %d",num1,num2,num1+num2);
}