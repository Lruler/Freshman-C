#include<stdio.h>
int main()
{
    int n;
    int t;
    scanf("%d",&n);
    if(n % 7 == 0)
    {
        t = n/7*2;
        printf("%d %d",t , t);
    }
    else if (n % 7 == 1)
    {
        
        t = (n - (n % 7)) / 7 * 2 + 1;
        printf( "%d %d",(n - (n%7))/7*2 ,t );
    }
    else if (n % 7 != 0 && n % 7 != 1)
    {
        t = (n - (n % 7)) / 7 * 2 + 2;
        printf( "%d %d",(n - (n%7))/7*2 ,t );
    }
    else if (n = 6)
    printf("1 2");
    else if (n = 1)
    printf("0 1");
    else
    printf("0 2");
    return 0;
}