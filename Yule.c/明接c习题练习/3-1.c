#include<stdio.h>
int main()
{
    int n;
    printf("请输入一个整数：");
    scanf("%d",&n);
    if(n<0)
    printf("%d",-n);
    else
    printf("%d",n);
    return 0;
}