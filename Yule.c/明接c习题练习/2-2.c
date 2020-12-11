#include<stdio.h>
int main()
{
    int x,y;
    puts("请输入两个整数。");
    printf("整数x:\n"); scanf("%d",&x);
    printf("整数y:\n"); scanf("%d",&y);
    printf("它们的和是%d,积是%d",x+y,x*y);
    return 0;

}