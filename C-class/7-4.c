#include <stdio.h>
int main()
{
    int nums[6][6];
    int i, j;
    printf("请输入六个整数\n");
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            if (i == 0)
            {
                scanf("%d", &nums[0][j]);
            }
            else if (j != 0)
            {
                nums[i][j] = nums[i - 1][j - 1];
            }
            else if (j == 0)
            {
                nums[i][j] = nums[0][6 - i];
            }
        }
    }
    printf("所构成的矩阵为：\n");
    for (i = 0; i < 6; i++)
        for (j = 0; j < 6; j++)
        {
            if (j == 5)
                printf("%d\n", nums[i][j]);
            else
                printf("%d ", nums[i][j]);
        }
    return 0;
}