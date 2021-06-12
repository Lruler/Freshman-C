#include <stdio.h>
int main()
{
    int a, b, o, n;
    scanf("%d", &a);
    o = a;
    while (a != 0)
    {
        b = a % 10;     // 1 1
        n = n * 10 + b; //11
        a /= 10;        // 1121 112
    }
    if (o == n)
        printf("是回文数");
    else
        printf("不是回文数");
    return 0;
}