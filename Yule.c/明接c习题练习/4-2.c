#include<stdio.h>
int main()
{
    int sum = 0 ;
    int a,b;
    int c;
    puts("请输入两个整数：");
    printf("整数a:");scanf("%d",&a);
    printf("整数b:");scanf("%d",&b);
    if(a < b)
    {
    sum = a;
    c = b*(b+1)/2 - a*(a+1)/2 + a;
    do
    {
    sum = sum + 1;
    } while (sum < c);
    }
    else
    {
    sum = b;
    c = a*(a+1)/2 - b*(b+1)/2 + b;
    do
    {
        sum = sum + 1;
    } while (sum < c);
    }
    printf("%d",c);
    return 0;
    


}