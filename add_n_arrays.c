#include<stdio.h>
int inputn()
{   int n;
    scanf("%d",&n);
    return n;
}
void inputnumbers(int i, int n, int a[n])
{
    printf("enter the nos:\n");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   return;
}
void compute(int a[], int s)
{
    int n;
    for(int i=0;i<n;i++)
    {
        s=s+a[i];
    }
    return;
}
void output(int s)
{

        printf("tne sum of n nos is:%d\n",s);
    }

 int main()
{
    int s=0,n;
    n=inputn();
    printf("read n:%d\n",n);
    int a[n],i=0;
    inputnumbers(i,n,a);
    compute(a,s);
    output(s);
 }
