#include<stdio.h>
void inputn(int *n)
{
     scanf("%d",n);
     return;
}
void inputnumbers(int n, int a[])
{

      for(int i=0;i<n;i++)
      {
          scanf("%d",&a[i]);
      }
      return;
}
void compute(int n, int a[],int *sum)
{
      int s=0;
      for(int i=0;i<n;i++)
      {
          s+=a[i];
      }
      *sum=s;
      return;
}
void output(int a[],int n,int sum)
{
      printf(" ");
      for(int i=0;i<n-1;i++)
      {
         printf("%d + ",a[i]);
      }
      printf("%d = %d",a[n-1],sum);

      return;
}
int main()
{
      int n,a[50],sum;
      printf("read n\n");
      inputn(&n);
      printf("read the numbers\n");
      inputnumbers(n,a);
      compute(n,a,&sum);
      output(a,n,sum);
      return 0;
}


