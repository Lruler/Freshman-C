#include<stdio.h>
int main()
{
    int a;
    int b=1;
    printf("正整数："); scanf("%d",&a);
    while (a > 0)
    {
        if (b % 2 == 1)
        {
            putchar('+');
        }
        else 
            putchar('-');
            a--;
            b++;
        
    }
    return 0;
    
}