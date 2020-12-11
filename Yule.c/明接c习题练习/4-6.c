#include<stdio.h>
int main()
{
    int a;
    int b = 2;
    printf("请输入一个整数："); scanf("%d",&a);
    while (b <= a)
    {
        printf("%d ",b );
        b += 2;
       
    }
    return 0;
    
}
