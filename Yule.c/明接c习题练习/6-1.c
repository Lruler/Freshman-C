#include<stdio.h>
int min2 (int a,int b)
{
    int min;
    min = a < b ? a : b;
    return min;
}
int main()
{
    int a,b;
    printf("请输入两个整数：");
    scanf("%d %d",&a,&b);
    printf("这两个数中较小的数为%d",min2(a,b));
    return 0;
}