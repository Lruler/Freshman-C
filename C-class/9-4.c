#include <stdio.h>
#include <string.h>
#include <mm_malloc.h>

char *substr(char *s, int startloc, int len);

int main()
{
    char str[100], s, l;

    printf("输入字符串：");
    gets(str);
    printf("开始的位置:");
    scanf("%d", &s);
    printf("子字符串长度:");
    scanf("%d", &l);
    printf("这个子字符串是: %s\n", substr(str, s, l));

    return 0;
}

char *substr(char *s, int startloc, int len)
{
    static char sstr[80];
    int i;
    if ((startloc < 0) || (startloc >= strlen(s)) || (len < 0))
        return (NULL);

    for (i = 0; i < len && s[startloc + i] != '\0'; i++)
        sstr[i] = s[startloc + i];

    sstr[i] = '\0';
    return (sstr);
}