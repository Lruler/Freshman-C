#include<stdio.h>
int main()
{
    int a,b,c ;
    printf("请输入三个整数：");scanf("%d %d %d",&a,&b,&c);
    if(a==b&&b==c)
    printf("三个值都相等");
    else if (a==c||c==b||a==b)
    printf("有两个值都想等");
    else
    printf("三个值都不想等");
    return 0;
}