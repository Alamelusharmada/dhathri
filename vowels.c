#include <stdio.h>

int main()
{
    char i;
    scanf("%c",&i);
    if((i=='a')||(i=='e')||(i=='i')||(i=='o')||(i=='u')||(i=="A")||(i=="E")||(i=="I")||(i=="O")||(i=="U"))
    {
        printf("the character is a vowel");
    }
    else
    {
        printf("the character is a consonent");
    }
    return 0;
}
