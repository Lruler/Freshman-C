#include <stdio.h>
Try(int i);

int like[5][5] = {{0, 0, 1, 1, 0}, {1, 1, 0, 0, 1}, {0, 1, 1, 0, 1}, {0, 0, 0, 1, 0}, {0, 1, 0, 0, 1}};
int book[5] = {0, 0, 0, 0, 0}; //book[i]代表第几个人拿走了第i+1本书.
int n = 0;

Try(int i)
{
    int j, k;

    for (j = 0; j < 5; j++)
    {
        if (like[i][j] == 1 && book[j] == 0)
        {
            book[j] = i + 1; //将第j+1本书分给第i+1个人
            if (i == 4)
            {
                n++;
                printf("第%d种分配方案为:\n", n);
                for (k = 0; k < 5; k++)
                {
                    printf("第%d本书分给%c\n", k + 1, book[k] + 'A' - 1);
                }
                printf("\n");
            }
            else
            {
                Try(i + 1); //如果还有人没分到书则递归给下一个人分书
            }
            book[j] = 0; //回溯重新将第j本书恢复成未选中状态
        }
    }
}

main()
{
    int i = 0;

    Try(i);
}
