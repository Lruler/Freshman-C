#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char *pstar, *pend;
    int len;
    printf("请输入字符串\n");
    gets(str);
    len = strlen(str);
    pstar = str;
    pend = str + len - 1;
    while (*pstar == *pend && pstar <= pend)
    {
        pstar++;
        pend--;
    }
    if (pstar < pend)
    {
        printf("NO");
    }
    else
        printf("YES");
    return 0;
}
