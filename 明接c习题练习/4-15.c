#include<stdio.h>
int main()
{
    int a,b,c;
    int i;
    printf("开始数值：");scanf("%d",&a);
    printf("结束数值：");scanf("%d",&b);
    printf("间隔数值：");scanf("%d",&c);
    for ( ; a <= b; a += c )
    {
        printf("%dcm   %.2fkg\n",a,(double)a/2);
    }
    return 0;
    
}