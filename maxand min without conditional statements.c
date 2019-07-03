#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first,second,max,min;
    printf("enterr the numbers");
    scanf("%d%d",&first,&second);
    max=first^((first^second)&-(first<second));
    min=second^((first^second)&-(first<second));
    printf("max=%d min=%d",max,min);
    return 0;
}
