#include<stdio.h>
void input(int *x)
{
      scanf("%d",x);
      return;
}
void sum(int *a, int *b, int *s)
{
      *s=*a+*b;
      return;
}
void output(int s)
{
      printf("the sum is %d",s);
      return;
}
int main()
{
      int a,b,s;
      printf("read a\n");
      input(&a);
      printf("read b\n");
      input(&b);
      sum(&a,&b,&s);
      output(s);
      return 0;
}
