#include<Stdio.h>

int main(void)
{
	int i,sum=0,total;
	for(i=1;i<100;i++)
	{
	 sum=-(sum+1);
	 total=total+sum;
	}
     
     printf("sum=%d",total);
}
