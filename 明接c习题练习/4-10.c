#include<stdio.h>
int main()
{
    int a;
    printf("正整数："); scanf("%d",&a);
    while (a>0)
    {
        printf("*\n");
        a--;
    }
    return 0;
}