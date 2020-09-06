#include<stdio.h>
int sum(int a, int b);
int main()
{
  int a=4, b=7;
  printf("sum of a nd b is %d\n", sum(a,b) );
}

int sum(int a, int b)
{
  return a+b;
}
