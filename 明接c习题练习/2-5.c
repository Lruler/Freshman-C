#include<stdio.h>
int main()
{
    int a;
    printf("请输入你的身高%d。\n"); scanf("%d",&a);
    printf("您的标准体重是：%.1f",(double)(a-100)*0.9);
    return 0;

}