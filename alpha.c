#include <stdio.h>

int main()
{
    char i;
    scanf("%c",&i);
    if((i>='a')&&(i<='z')||(i>='A')&&(i<='Z'))
    {
        printf("the character is an alphabet");
    }
    else
    {
        printf("it is not an alphabet");
    }
    return 0;
}
