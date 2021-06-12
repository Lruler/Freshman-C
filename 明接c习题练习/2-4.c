#include<stdio.h>
int main()
{
    int a,b;
    printf("请输入两个整数。\n");
    printf("整数a:"); scanf("%d",&a);
    printf("整数b:"); scanf("%d",&b);
    printf("a是b的%f%%",(double)a/b);
    return 0;

}