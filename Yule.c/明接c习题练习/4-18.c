#include<stdio.h>
int main()
{
    int a;
    int i;
    printf("显示多少个*："); scanf("%d",&a);
    for(i = 1; i <= a; i++){
        if (i % 5)
        {
            printf("*");
        }
        else
        printf("*\n");
    }
    return 0;

}