//incomplete
#include<stdio.h>
int main()
{
  int year;
  printf("Enter year: (ex. 2015)\n" );
  scanf("%d\n", year );

  if((year%4==0) && (year%100!=0) || (year%400==0))
  {
    printf("Leap year\n" );
  }
  else{
    printf("not leap year\n" );
  }
  return 0;
}
