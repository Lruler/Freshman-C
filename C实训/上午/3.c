#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char ch;
    fp=fopen("ch.txt","wt");
    if(fp==NULL)
        exit(0);
    for(;(ch=getchar())!='#';)
        fputc(ch,fp);
    fclose(fp);
    return 0;
}
