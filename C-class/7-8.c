#include <stdio.h>
#include <string.h>
int main()
{
    char str[80];
    int i;
    printf("请输入一串有c的字符\n");
    gets(str);
    printf("删除c后\n");
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] != 'c')
        {
            printf("%c", str[i]);
        }
    }
    return 0;
}