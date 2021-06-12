#include <stdio.h>

int main()
{
    short int a, b, c, d;
    unsigned int max, min, del;
    scanf("%hd %hd %hd %hd", &a, &b, &c, &d);

    a = (unsigned int)a;
    b = (unsigned int)b;
    c = (unsigned int)c;
    d = (unsigned int)d;

    max = (a > b ? a : b) > (c > d ? c : d) ? (a > b ? a : b) : (c > d ? c : d);
    min = (a < b ? a : b) > (c < d ? c : d) ? (a < b ? a : b) : (c < d ? c : d);
    del = max - min;

    printf("无符号最大:%u   无符号最小: %u\n", max, min);
    printf("无符号最大输入:%d     无符号最小输入:%d\n", max, min);
    printf("二者之差 %u\n", del);
}
