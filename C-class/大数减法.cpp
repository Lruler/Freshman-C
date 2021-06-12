#include <stdio.h>
#include <string.h>
#define M 100005
using namespace std;
char s1[M], s2[M], s[M];
int a[M], b[M], c[M];
/*较大数减去较小数，即正常减*/
void ss(char s1[], char s2[], int n, int m)
{
    int i, j, a[M], b[M];
    for (i = 0; i < n; i++)
        a[i] = s1[n - i - 1] - '0';
    for (i = 0; i < m; i++)
        b[i] = s2[m - i - 1] - '0';
    for (i = 0; i < n; i++)
        c[i] = a[i] - b[i];
    for (i = 0; i < n; i++)
        if (c[i] < 0)
        {
            while (c[i] < 0)
            {
                c[i + 1] = c[i + 1] - 1; //借位（高位减一，低位加十）
                c[i] += 10;
            }
        }
}
int main()
{
    int n, m, i, j, k, kk;
    memset(s1, 0, sizeof(s1));
    memset(s2, 0, sizeof(s2));
    while (~scanf("%s%s", s1, s2))
    {
        n = strlen(s1);
        m = strlen(s2);
        printf("s1=%d s2=%d\n", n, m);
        if (n > m)
            ss(s1, s2, n, m);
        else if (n < m)
        {
            printf("-");
            ss(s2, s1, m, n);
        }
        else
        { /*当两个数位数相同时，判断两个数的大小 */
            k = strcmp(s1, s2);
            /*strcmp()函数：从第一位开始比较两个字符串大小（不管位数多少） 
k>0则s1较大，k<0则s2较大，k=0则s1=s2*/
            if (k == 0)
            {
                printf("0\n");
                continue;
            }
            else if (k > 0)
                ss(s1, s2, n, m);
            else
            {
                printf("-");
                ss(s2, s1, m, n);
            }
        }
        if (n > m)
            kk = n;
        else
            kk = m;
        while (c[kk] == 0)
            kk--; //排除前导0
        for (i = kk; i >= 0; i--)
            printf("%d", c[i]);
        printf("\n");
    }
    return 0;
}