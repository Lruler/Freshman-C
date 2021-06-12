#include <stdio.h>
int main()
{
    int v1[4][3] = {0};
    int v2[3][4] = {0};
    int v3[4][4] = {0};
    int i, j, k;
    puts("请输入四行三列的矩阵");
    for (i = 0; i < 4; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &v1[i][j]);
    puts("请输入三行四列的矩阵");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 4; j++)
            scanf("%d", &v2[i][j]);
    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
            for (k = 0; k < 3; k++)
                v3[i][j] += v1[i][k] * v2[k][j];
    puts("这两个矩阵的乘积是");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            printf("%d ", v3[i][j]);
        putchar('\n');
    }
    return 0;
}