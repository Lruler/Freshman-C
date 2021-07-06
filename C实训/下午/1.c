#include <stdio.h>
int main(void)
{
    int i,j,k;
    for(i=0;i<=4;i++){
         for(j=0;j<4-i;j++){
            putchar(' ');
        }
            for(j=0;j<(2*i)-1;j++){
            putchar('*');
        }
        putchar('\n');
    }
    for(i=5;i<=7;i++){
        for(j=1;j<=i-4;j++){
            putchar(' ');
        }
        for(j=1;j<=(7-2*(i-4));j++){
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}