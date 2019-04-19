#include<stdio.h>
int getinput(int);
int add(int,int);
void  output(int);
void main()
{
  int a,b,sum;
  a=getinput(a);
  b=getinput(b);
  sum=add(a,b);
  output(sum);
}
int getinput(int x)
{
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
  return;
}


