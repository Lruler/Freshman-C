#include<stdio.h>
int main()
{
    int a;
    do
    {
        printf("请输入一个整数："); scanf("%d",&a);
        if (a <= 0)
        {
            puts("\a请不要输入非正整数");
        }
        
    } while (a <= 0);
    printf("%d该整数的逆向显示结果是：",a);
    while (a > 0)
    {
        printf("%d",a % 10);
        a /= 10;
    }
    return 0;
    
   

}