#include<stdio.h>
#include<math.h>
int myfunc(int x,int n){
    int s=0;
    int k=x;
    for(int i=1;i<=n;i++){
        k=pow(x,i);
        s+=k;
    }
    return s;
}
int main()
{
    int x,n;
    printf("x:");
    scanf("%d",&x);
    printf("n:");
    scanf("%d",&n);
    printf("result:%d",myfunc(x,n));
    return 0;

}