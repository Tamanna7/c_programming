#include<stdio.h>
int main()
{
  char ch;
  printf("enter a character\n" );
  scanf("%c", &ch);
  if(ch<=122 && ch>=97)
  {
    printf("it is lowercase\n" );
  }
  else{
      printf("it is Uppercase\n" );
  }
}
