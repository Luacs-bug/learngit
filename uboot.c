#include"stdio.h"
#define MIN(x,y) ((x)<(y)?(x):(y))
#define MAX(A,B) ((A)>(B)?(A):(B))

int main()
{
  int x,y;
  x=10,y=20;
  

  printf("MIN=%d\n",MIN(x,y));
  printf("MAX=%d\n",MAX(x,y));
  return 0;


}
