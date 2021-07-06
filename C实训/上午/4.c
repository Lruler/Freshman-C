#include<stdio.h>
int main()
{
    int a[100][100];
    int i,j,N,sum=0;
    printf(" ‰»ÎN£∫");
    scanf("%d",&N);
    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
           scanf("%d",&a[i][j]);
    printf("\n");
    for(i=1,j=0;j<N;j++)
    {
        printf("%d ",a[i][j]);
        sum+=a[i][j];
    }
    printf("\n");
    printf("%d",sum);
    return 0;
}
