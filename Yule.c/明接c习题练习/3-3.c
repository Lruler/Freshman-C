#include<stdio.h>
int main()
{
    int a,b,c;
    int min;
    scanf("%d %d %d",&a,&b,&c);
    min = (b < c)? b : c;
    min = (min < a)? min : a;
    printf("%d\a",min);
    return 0;

    


}