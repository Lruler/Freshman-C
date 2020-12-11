#include <stdio.h>
int f(char x, char y);
void trans(int n, char a, char b);

int main()
{
    int n;
    char a = 'a', b = 'b', c = 'c';
    scanf("%d", &n);
    trans(n, a, c);

    return 0;
}
int f(char x, char y)
{
    int i;
    char g[3] = {'a', 'b', 'c'};

    for(i = 0; i < 3; i++)
    {
        if(g[i] != x && g[i] != y)
        {
            return g[i];
            break;
        }
    }
}
void trans(int n, char x, char y) //x, y, z分别代表初位置，中转位置和末位置.
{
    char a = 'a', b = 'b', c = 'c';
    char z;
    z = f(x, y);
    if(n == 1)
    {
        printf("1:%c->%c\n", x, y);
    }
    else if(n == 2)
    {
        printf("1:%c->%c\n", x, z);
        printf("2:%c->%c\n", x, y);
        printf("1:%c->%c\n", z, y);
    }
    else if(n > 2)
    {
        trans(n - 1, x, z);
        printf("%d:%c->%c\n", n, x, y);
        trans(n - 1, z, y);
    }
}