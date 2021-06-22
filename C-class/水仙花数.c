#include <stdio.h>
int main()
{
    printf("所有的水仙花数是:\n");
    for (int i = 100; i < 1000; i++)
    {
        int a = i % 10;
        int b = ((i - a) % 100) / 10;
        int c = i / 100;
        int sum = (a * a * a) + (b * b * b) + (c * c * c);
        if (i == sum)
            printf("%d ", i);
    }
    return 0;
}