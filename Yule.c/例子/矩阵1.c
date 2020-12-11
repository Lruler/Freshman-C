#include<stdio.h>
#define M 4            //第一个矩阵的行数 、第二个矩阵的列数 （可根据自己的需要做调整） 
#define N 3            //第一个矩阵的列数 、第二个矩阵的行数（这两个参数不限制，可不一致） 
int main()
{
    int a[M][N],b[N][M],c[M][M]={0};
    
    int i,j,k;
    
    //ENPUTS
    puts("Please enter the first Matrix:");//The 4-3 Matrix     参数宏定义可以自己改 
    for(i = 0;i<M;i++)
        for(j = 0;j<N;j++)
            scanf("%d",&a[i][j]);
            
    puts("Please enter the second Matrix:");//The 3-4 Matrix
    for(i = 0;i<N;i++)
        for(j = 0;j<M;j++)
            scanf("%d",&b[i][j]);
    
    //DISPLAY                
    puts("The first Matrix is:");
    for(i = 0;i<M;i++){
        for(j = 0;j<N;j++)
            printf("%d\t",a[i][j]);
        putchar('\n');
    }
            
    puts("The second Matrix is:");
    for(i = 0;i<N;i++){
        for(j = 0;j<M;j++)
            printf("%d\t",b[i][j]);
        putchar('\n');
    }
    
    //RUN
    for(i = 0;i<M;i++)
        for(j = 0;j<M;j++)
            for(k = 0;k<N;k++)
                c[i][j] += a[i][k]*b[k][j];
    
    //ANSWERS
    puts("The answer of first Matrix and second Matrix is:");            
    for(i = 0;i<M;i++){
        for(j = 0;j<M;j++)
            printf("%d\t",c[i][j]);
        putchar('\n');
        }
    
    return 0;
}
