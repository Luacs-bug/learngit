#include"stdio.h"

int main()
{
  int a,b,c;
  a=10,b=20;
  a =b++;
  b =++b;
  c =a+b;
  printf("a=%d\nb=%d\nb=%d\n",a,b,c);
  printf("hello world\n");


   return 0;
}
