#include<stdio.h>
void input(int &a)
{     scanf("%d,*a);
      return;
}
void compute(int &a)
{     int m;
      m=*a+1;
      return;
}
void output(int &a, int &temp)
{     printf("the input number is %d\n and the updated value is %d\n",*a,*temp);
      return;
}      
void main()
{     
      int a,temp;
      printf("read a");
      input(*a);
      temp=a;
      compute(*a);
      output(*a,*temp);
      return;
}      
