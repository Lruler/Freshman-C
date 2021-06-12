#include <stdio.h>
int main()
{
    int m = 0;
    scanf("%d", &m);
    printf("m^3=%d,组成该数据的奇数分别为：", m * m * m);
    for (int i = 0; i < m; i++)
    {
        printf("%d ", m * (m - 1) + (i * 2 + 1));
    }
    return 0;
}