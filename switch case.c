#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("enter a charecter");
    scanf("%c",&ch);
    switch(ch)

    {
  default:
          printf("not a valid number");

           break;
    case 'a':printf("its an vowel");
             break;
    case 'e':printf("vowel");
             break;
    case  'i':printf("vowel");
             break;
    case '0':printf("vowel");
             break;

    case 'u':printf("vowel");
              break;
      return 0;
}
}
