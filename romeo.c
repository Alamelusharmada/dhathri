#include <stdio.h>

int main()
{
    int i,j,row,colum,mat[i][j],s,d,loc,loc1,loc2,loc3;
    scanf("%d%d",&row,&colum);
    for(i=0;i<row;i++)
    {
    for(j=0;j<colum;j++)
    scanf("%d",&mat[i][j]);
    printf("\t");
    }
    printf("\n");
    printf ("-1");
    for(i=0;i<row;i++)
    {
        for(j=0;j<row;j++)
        if(d==a[i][j])
        loc=i;
        loc1=j;
        else if(s==a[i][j])
        loc2=i;
        loc3=j;
        printf("a",mat[loc2][loc3]);
        break;
    if((i=j)&&(mat[i][j]='-'))
    {
        printf("a");
    }
    else if((mat[i][j-1]='-')||(mat[i][j+1]='-')
    {
        printf("a");
    }

