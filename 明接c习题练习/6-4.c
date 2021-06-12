#include<stdio.h>
int sumup (int n)
{
    int i ;
    int sum = 0 ;
    for(i=1;i<=n;i++){
        sum += i;
    }
    return sum;
}
int main()
{
    int a;
    printf("请输入一个整数："); scanf("%d",&a);
    printf("1到%d之间所有的整数和是%d",a,sumup(a));
    return 0;
}