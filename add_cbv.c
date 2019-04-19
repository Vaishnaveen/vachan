#include<stdio.h>
int input()
{    int a;
     scanf("%d",&a);
     return a;
  }
int compute(int a)
{    a=a+1;
     return a;
  }   
void output(int x)
{    printf("%d",x);
     return;
 }
void main()
{    
     int a,sum;
     printf("read a\n");
     a=input();
     sum=compute(a);
     output(sum);
     return;
  }
 
 
 
 
 
 
