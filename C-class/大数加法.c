#include <stdio.h>
#include <string.h>

int main(void)
{
    int bigInteger_1[201] = {0}; // 用来存放大整数1的整型数组
    int bigInteger_2[201] = {0}; // 用来存放大整数2的整型数组
    char sNum_1[201] = {'\0'};   // 用来接收用户输入的字符串形式的大整数1
    char sNum_2[201] = {'\0'};   // 用来接收用户输入的字符串形式的大整数2

    //输入大整数1和大整数2
    scanf("%s %s", sNum_1, sNum_2);

    /*
		这两个循环的功能均是将字符串中的字符大整数，转换为int型数组中的整型值
		并且转换后的int型数组中的低位序存储的是大整数的低位，即bigInteger_1[0]
		存放的是大整数的个位，依次类推
	*/
    for (int i = 0, j = strlen(sNum_1) - 1; j >= 0;)
    {
        bigInteger_1[i++] = sNum_1[j--] - '0';
    }
    for (int i = 0, j = strlen(sNum_2) - 1; j >= 0;)
    {
        bigInteger_2[i++] = sNum_2[j--] - '0';
    }

    //进行大整数的加法
    int k = 0;
    while (k <= 200)
    {
        bigInteger_1[k] += bigInteger_2[k]; //将大整数从低位到高位依次相加

        if (bigInteger_1[k] >= 10)
        {
            bigInteger_1[k + 1]++;
            bigInteger_1[k] -= 10;
        }
        k++;
    }

    /*
		去除前导零将大整数加法的结果进行输出，思路是，从加完后的大整数的最高位开始寻找
		找到第一个不为零的数字后，记录这个不为零的数字在bigInteger数组中的索引，如果全部
		数字全部为零，那么就输出零，否则就输出大整数中第一个不为零的数字及其后面的所有
		数字。
	*/
    int mark = 0; // 用来记录第一个不为零的数字的索引
    int i = 0;
    for (i = 200; i >= 0; i--)
    {
        if (bigInteger_1[i] != 0)
        {
            mark = i; // 记录大整数中第一个不为零的数字的索引
            break;    // 结束循环
        }
    }

    /*
		如果i的值等于-1，说明遍历完大整数数组，也没有发现大整数数组中有存在非零的数
		因此就可以判定大整数加完之后的结果就是零
	*/
    if (i == -1)
    {
        printf("0\n");
    }
    else
    {
        for (int i = mark; i >= 0; i--)
        {
            printf("%d", bigInteger_1[i]); // 从大整数中第一个不为零的索引开始进行遍历输出
        }
        putchar('\n');
    }
    return 0;
}
