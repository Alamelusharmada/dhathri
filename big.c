#include <stdio.h>

int main()
{
    int a, b, c;
    printf("enter the nos");
    scanf("%d %d %d",&a,&b,&c);
    if((a>b)&&(a>c))
    {
        printf("%d is big",a);
    }
    else if(b>c)
    {
        printf("%d is big",b);
    }
    else
    {
        printf("%d is big",c);
    }
    return 0;
}
