#include <stdio.h>

int main()
{
    int i;
    scanf("%d",&i);
    if(i>0)
    {
        printf("the no is +ve");
    }
    else if(i<0)
    {
        printf("the no is -ve");
    }
    else
    {
        printf("the no is 0");
    }
    return 0;
}
