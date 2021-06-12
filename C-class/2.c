#include <stdio.h>
#include <stdlib.h>

int main()
{
  long l;
  int a, b, x, y;

  scanf("%lx", &l);

  a = l & 0x0000FFFF;         //低16位
  b = (l & 0xFFFF0000) >> 16; //高16位
  x = a & 0x00FF;
  y = (a & 0xFF00) >> 8;

  if ((a & 0x0001) == 0)
    printf("低16位是偶数！");
  else
    printf("低16位是奇数！");

  a = ((x << 8) + y);

  if ((b & 0x0001) == 0)
    printf("高16位是偶数！");
  else
    printf("高16位是奇数！");

  x = b & 0x00FF;
  y = (b & 0xFF00) >> 8;
  b = ((x << 8) + y);
  l = (a << 16) + b;

  printf("%lx", l);
  return 0;
}
