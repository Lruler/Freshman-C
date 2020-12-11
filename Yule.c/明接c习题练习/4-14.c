#include<stdio.h>
int main()
{
    int a;
    int i = 1;
    int b;
    printf("请输入一个整数：");scanf("%d",&a);
    for(i = 1; i <= a; i++)
    {
        b = i % 10;
        printf("%d",b);
    }
    return 0;
}