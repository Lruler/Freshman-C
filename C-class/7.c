#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

// 定义结构体node
struct node
{
    char s[20];
    int times;
};

// 简化命名
typedef struct node node;

void swap(node *a, node *b) // 两个指针型结构体作为参数
{
    node temp = *a;
    *a = *b;
    *b = temp;
}

void selection_sort(node a[], int len) //选择排序
{
    int i, j, max;
    for (i = 0; i < len - 1; i++)
    {
        max = i;
        for (j = i; j < len; j++)
            if (a[j].times > a[max].times)
                max = j;
        swap(&a[i], &a[max]);
    }
}

node par[100]; //结构体数组
int i = -1;
int k;
bool check(node t)
{
    for (k = 0; k < i; k++)
        if (strcmp(par[k].s, t.s) == 0)
            return false;
    return true;
}

int main()
{
    bool re;
    int j, len;
    puts("输入英文文段，输入###结束统计：");
    while (scanf("%s", par[++i].s) != EOF)
    {
        if (strcmp(par[i].s, "###") == 0) //终止条件
            break;

        len = strlen(par[i].s);

        if (ispunct(par[i].s[len - 1]))
            par[i].s[len - 1] = '\0';

        re = check(par[i]);

        if (re)
            par[i].times = 1;
        else
        {
            par[k].times += 1;
            i--;
        }
    }
    selection_sort(par, i);
    for (j = 0; j < i; j++)
    {
        printf("%s(%d)   ", par[j].s, par[j].times);
        if (j % 10 == 9)
            printf("\n");
    }
    return 0;
}