#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("enter a,b,c values");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
        printf("a is big");
    else if(b>c)
        printf("print b is big");
    else
        printf("%d",c);



    return 0;
}
