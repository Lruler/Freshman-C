#include<stdio.h>
int main()
{
    int a,b;
    printf("请输入两个整数：");
    scanf("%d %d",&a,&b);
    if(a==b)
    printf("a与b相等");
    else if(a>b)
    printf("a大于b");
    else
    printf("a小于b");
    return 0;


}