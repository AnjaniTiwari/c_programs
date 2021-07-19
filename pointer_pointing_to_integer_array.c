#include<stdio.h>
int main()
{
  int n[]={1,2,3,4,5};
  int *ptr;
  ptr=n;
  int i=0;
  while(i<5){
    printf("n[%d] = %d\n",(5-i),*(ptr+(4-i)));
    i++;
/*  }*/
  return 0;
}
