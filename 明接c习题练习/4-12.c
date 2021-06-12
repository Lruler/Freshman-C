#include<stdio.h>
int main()
{
    int a;
    int b = 0;
    printf("请输入一个整数："); scanf("%d",&a);
    printf("%d的位数是",a);
    while (a > 0)
    {
        b++;
        a /= 10;
    }
    printf("%d",b);
    return 0;
    
    
}