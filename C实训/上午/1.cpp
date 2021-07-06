#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
	int i,n;
	while((i=getchar())!='\n')
	switch(i)
	{
		case 'a':n=n+1;break;
		case 'e':n=n+1;break;
		case 'i':n=n+1;break;
		case 'o':n=n+1;break;
		case 'u':n+=1;break;
		default :break;
	}
    printf("result is %d",n);
 
 } 
