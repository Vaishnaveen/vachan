#include<stdio.h>
int getinput();
int add(int,int);
void  output(int);
int main()
{
  int a,b,sum;
  a=getinput();
  b=getinput();
  sum=add(a,b);
  output(sum);
  return 0;
}
int getinput()
{
  int x;
  printf("read value\n");
  scanf("%d",&x);
  return x;
}
int add(int x, int y)
{
  return (x+y);
}
void output(int p)
{
  printf("the sum is %d",p);
  return ;
}


