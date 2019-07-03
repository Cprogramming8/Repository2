#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("enter a,b values");
    scanf("%d%d",&a,&b);
    a=(a+b)-(b=a);
    printf("a=%d b=%d",a,b);
    return 0;
}
