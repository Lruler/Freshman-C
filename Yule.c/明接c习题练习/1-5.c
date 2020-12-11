#include<stdio.h>
int main()
{
    int a,b;
    int c;
    puts("请输入两个整数。");
    printf("整数1:"); scanf("%d",&a);
    printf("整数2:"); scanf("%d",&b);
    c = a*b;
    printf("它们的乘积是%d\n",c);
    return 0;

}