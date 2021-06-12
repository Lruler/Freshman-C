#include<stdio.h>
int cube (int x)
{
    return x*x*x;
}
int main()
{
    int x;
    printf("请输入一个整数："); scanf("%d",&x);
    printf("%d",cube(x));
    return 0;
}