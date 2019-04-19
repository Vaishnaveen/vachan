#include<stdio.h>
void inputn(int *n)
{
     scanf("%d",n);
     return;
}
void inputnumbers(int n, int a[0])
{
      for(int i=0;i<n;i++)
      {
          scanf("%d",a[i]);
      }
      return;
}
void compute(int n, int a[0],int *sum)
{
      for(int i=0;i<n;i++)
      {
          *sum+=a[i];
      }
      return;
}
void output(int sum)
{
      printf("the sum is %d",sum);
      return;
}
int main()
{
      int n,a[50],sum;
      printf("read n\n");
      inputn(&n);
      printf("read the numbers\n");
      inputnumbers(n,*a[0]);
      compute(n,*a[0],&sum);
      output(sum);
      return 0;
}
