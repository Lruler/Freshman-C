#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n % 4 == 0)
    {
        printf("%d %d",n/4,n/2);
    }
    else if (n % 2 == 0 && n % 4 != 0)
    {
      printf("%d %d",(n-2)/4+1,n/2);  
    }
    else 
    {
        printf("0 0");
    }
    return 0;
    
}