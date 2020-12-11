#include<stdio.h>
int main()
{
    int n;
    int i = 1;
    int c;
    printf("n的值："); scanf("%d",&n);
    for(i = 1 ; i <= n ; i++){
        c+=i;
    }
    printf("1到%d的和是%d",n,c);
    return 0;
}
