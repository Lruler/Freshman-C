#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int x = a < b ? 1 : -1;
    int sum = 0;
    do
    {
        sum += a;
        a = a + x;
    } while (a != b);
    sum += b;
    printf("%d",sum);
    return 0;
    
}