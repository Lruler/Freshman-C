#include <stdio.h>
#include <stdio.h>
#include <string.h>
//前缀为0,则为国际长途；前戳为1，则为国内长途；前戳为2，则为市话
int min(int i);
int cal(int i, char call[20]);

struct data_info
{
    int year;
    int month;
    int day;
} date[6];

struct time
{
    int h;
    int m;
    int s;
} t[6][2];

int main()
{
    int i, j;
    char call[6][20], rec[6][20];
    int fare[6];
    int f[6], order[6];

    printf("请依次输入日期、主叫号码、被叫号码、起始时间、通话时间\n");
    for (i = 0; i < 6; i++)
    {
        scanf("%d%d%d", &date[i].year, &date[i].month, &date[i].day);
        scanf("%s", call[i]);
        scanf("%s", rec[i]);
        scanf("%d%d%d", &t[i][0].h, &t[i][0].m, &t[i][0].s);
        scanf("%d%d%d", &t[i][1].h, &t[i][1].m, &t[i][1].s);
    }

    for (i = 0; i < 6; i++)
    {
        fare[i] = cal(i, call[i]);
        f[i] = fare[i];
    }

    for (i = 0; i < 6; i++)
    {
        int max = f[0];
        for (j = 0; j < 6; j++)
        {
            if (max < f[j])
            {
                max = f[j];
            }
        }
        order[i] = max;
        for (j = 0; j < 6; j++)
        {
            if (max == f[j])
                f[j] = 0;
        }
    } //按顺序打印，把fare[i] = 0;

    printf("   日期      主叫号码      被叫号码      起始时间       通话时间\n");
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            if (order[i] == fare[j])
            {
                printf("%4d-%02d-%02d    ", date[j].year, date[j].month, date[j].day);
                printf("%s    ", call[j]);
                printf("%s    ", rec[j]);
                printf("%02d:%02d:%02d       ", t[j][0].h, t[j][0].m, t[j][0].s);
                printf("%02d:%02d:%02d\n", t[j][1].h, t[j][1].m, t[j][1].s);
            }
        }
    }
}

int min(int i)
{
    int min;

    min = (t[i][1].h - t[i][0].h) * 60 + (t[i][1].m - t[i][0].m);
    if (t[i][1].s > t[i][0].s)
        min += 1;
    return min;
}

int cal(int i, char call[20])
{
    float fare;

    switch (call[0])
    {
    case '0':
        fare = min(i) * 1.00;
        break;
    case '1':
        min(i);
        fare = min(i) * 0.60;
        break;
    case '2':
        min(i);
        if (min(i) >= 3)
            fare = 3 * 0.20 + (min(i) - 3) * 0.10;
        else
            fare = min(i) * 0.20;
        break;
    }
    return fare;
}
