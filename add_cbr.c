#include<stdio.h>
void input(int *a)
{
      scanf("%d",a);
      return;
}
void compute(int *a)
{     int m;
      m=*a+1;
      *a=m;
      return;
}
void output(int a, int temp)
{     printf("the input number is %d\nand the updated value is %d\n",temp,a);
      return;
}
int main()
{
      int a,temp;
      printf("read a\n");
      input(&a);
      temp=a;
      compute(&a);
      output(a,temp);
      return 0;

}
