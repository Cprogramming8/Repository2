
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,count=0,rem;
    printf("enter number");
    scanf("%d",&a);
    while(a!=0)
    {
        rem=a%10;
        a=a/10;
        count++;
    }
    printf("count =%d",count);
    return 0;
}
