#include<stdio.h>
int main()
{
    int s[15],flag=0,j=0,del=0,n=0;
    for(int i=1;flag<15;i++)
    {
        n++;
        for(int k=0;k<j;k++){
            if(s[k]==i){
                del=1;
                break;
            }
        }
        if(del){
            i--;
            continue;
        }
        if(i%9==0){
            flag++;
            s[j]=n;
            j++;
        }
        if(n==30){
            n=0;
        }
        
    }
    for( int i=0;i<15;i++){
        printf("%d ",s[i]);
    }

}