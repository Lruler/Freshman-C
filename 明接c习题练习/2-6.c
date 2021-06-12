#include<stdio.h>
int main()
{
    int a,b;
    printf("请输入两个整数\n");
    printf("整数a:"),scanf("%d",&a);
    printf("整数b:"),scanf("%d",&b);
    if(a % b)
    {
        puts("b不是a的约数");
    }
    else
    {
        puts("b是a的约数");
    }
    return 0;
    

}