#include<stdio.h>
int main()

{
    int i=34;
    int *j= &i;
    printf("the value of i is  %d\n",i );
    printf("the value of i is %d \n", *j );
    printf("address of i is %d \n\n",&i );
    printf("address of j is %u \n\n", &j );
    printf("value at j is %d\n", *(&i) );
    return 0;
  }
