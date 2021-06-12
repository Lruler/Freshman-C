#include <stdio.h>
#include <string.h>

void get(char *str, int a, int len);
void insert(char *str_a, char *str, int spot);
void del(char *str, int a, int len);

void get(char *str, int a, int len)
{
    int i;

    strcpy(str, str + a - 1);
    for (i = 0; i < len; i++)
    {
        str++;
    }
    *str = '\0';
    str -= len;
    printf("输出内容：%s\n", str);
}

void insert(char *str_a, char *str, int spot)
{
    int i;
    char *str_t;

    strcpy(str_t, str + spot);
    for (i = 0; i < spot; i++)
    {
        *str++;
    }
    *str = '\0';
    strcat(str, str_a);
    strcat(str, str_t);
    str -= spot;
    printf("插入后：%s\n", str);
}

void del(char *str, int a, int len)
{
    int i = 0;
    char *str_t;

    strcpy(str_t, str + a + len - 1);
    for (i = 0; i < a - 1; i++)
    {
        *str++;
    }
    *str = '\0';
    strcat(str, str_t);
    str -= (a - 1);
    printf("删除后：%s\n", str);
}

void main()
{
    int key;
    char str[80], str_t[80];
    int a, len, flag = 1;

    while (flag)
    {
        printf("请输入一个数字选择需要执行的操作（1：取子串；2：插入；3：删除；0：退出）：");
        scanf("%d", &key);

        switch (key)
        {
        case 1:
            printf("请输入字符串：");
            scanf("%s", str);
            printf("请输入子串起始位置：");
            scanf("%d", &a);
            printf("请输入子串长度：");
            scanf("%d", &len);
            get(str, a, len);
            continue;
        case 2:
            printf("请输入源字符串：");
            scanf("%s", str_t);
            printf("请输入目标字符串：");
            scanf("%s", str);
            printf("请输入插入的指定位置：");
            scanf("%d", &a);
            insert(str_t, str, a);
            continue;
        case 3:
            printf("请输入字符串：");
            scanf("%s", str);
            printf("请输入待删除子串的起始位置：");
            scanf("%d", &a);
            printf("请输入待删除子串的长度：");
            scanf("%d", &len);
            del(str, a, len);
            continue;
        case 0:
            flag = 0;
        }
    }
}
