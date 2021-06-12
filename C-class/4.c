#include <stdio.h>
int main()
{
    int a, b;
    int m[4];
    int l = 0;
    int t;
    printf("请输入四位整数\n");
    scanf("%d", &a);
    if (a >= 1000)
    {
        int c = a;
        printf("逆序显示为:");
        while (c != 0)
        {

            l++;
            b = c % 10;
            c /= 10;
            if (l == 4)
                printf("%d\n", b);
            else
                printf("%d", b);
        }
        m[0] = a % 10;
        m[1] = a / 10 % 10;
        m[2] = a / 100 % 10;
        m[3] = a / 1000;
        for (int i = 0; i < 4; i++)
        {
            for (int j = i + 1; j < 4; j++)
            {
                if (m[i] < m[j])
                {
                    t = m[i];
                    m[i] = m[j];
                    m[j] = t;
                }
            }
        }
        printf("重组最大为:");
        for (int i = 0; i < 4; i++)
        {

            if (i == 3)
            {
                printf("%d\n", m[i]);
            }
            else
                printf("%d", m[i]);
        }
        printf("重组最小为:");
        for (int i = 3; i > -1; i--)
        {
            if (i == 0)
            {
                printf("%d\n", m[i]);
            }
            else
                printf("%d", m[i]);
        }
    }
    else
        printf("不认识中国字？");
    return 0;
}