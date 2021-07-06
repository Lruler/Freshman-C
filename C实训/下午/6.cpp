#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=0;j<=3-i;j++)
        printf(" ");
        for(j=0;j<2*i-1;j++)
        printf("*");
        printf("\n");
    }
    for(i=3;i>=1;i--)
    {
        for(j=0;j<=3-i;j++)
        printf(" ");
        for(j=0;j<2*i-1;j++)
        printf("*");
        printf("\n");
    }
}

