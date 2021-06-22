#include <stdio.h>
#include <string.h>
int main()
{
    char strs[100];
    int i;
    printf("Input a string: ");
    gets(strs);
    printf("After reverse: ");
    for (i = strlen(strs) - 1; i >= 0; i--)
        printf("%c", strs[i]);

    printf("\n");
    return 0;
}