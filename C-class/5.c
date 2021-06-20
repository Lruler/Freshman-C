// #include <stdio.h>
// int main()
// {
//     int m = 0;
//     scanf("%d", &m);
//     printf("m^3=%d,组成该数据的奇数分别为：", m * m * m);
//     for (int i = 0; i < m; i++)
//     {
//         printf("%d ", m * (m - 1) + (i * 2 + 1));
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int n, sum, temp;
    int i, j;
    scanf("%d", &n);
    int total = n * n * n;
    for (i = 1; i < total; i += 2)
    {
        sum = 0;
        for (j = i; j < total + 1; j += 2)
        {
            sum += j;
            if (sum > total)
                break;
            if (sum == total)
            {
                int temp = j;
                for (j = i; j <= temp; j += 2)
                {
                    if (j < temp)
                    {
                        printf("%d ", j);
                    }
                    if (j == temp)
                    {
                        printf("%d \n", j);
                    }
                }
            }
        }
    }
    return 0;
}