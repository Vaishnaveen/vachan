#include<stdio.h>
void input(int *x)
{
    scanf("%d",x);
    return;
}
void output(int a,int b)
{

    if(a==b)
    {
            printf("the sum of the given fraction is = 1");
    }
    else if(b==1)
    {
            printf("the sum of the given fraction is = %d",a);
    }
    else
    {
            printf("the sum the given fraction is = %d/%d",a,b);
    }
    return;
}
void add(int n1, int n2, int d1, int d2, int *n3, int *d3)
{
   *d3=d1*d2;
   *n3=(n1*d2)+(n2*d1);
   return;
}
int gcd(int a, int b)
{   int x;
    for(int i=1;((i<=a)&&(i<=b));i++)
    {
        if((a%i==0)&&(b%i==0))
        {
                x=i;
        }
    }


    return x;
}
int main()
{
    int n1,n2,n3,d1,d2,d3,x;
    printf("read n1\n");
    input(&n1);
    printf("read d1\n");
    input(&d1);
    printf("read n2\n");
    input(&n2);
    printf("read d2\n");
    input(&d2);
    add(n1,n2,d1,d2,&n3,&d3);
    x=gcd(n3,d3);
    n3/=x;
    d3/=x;
    output(n3,d3);
}


    
    
    
