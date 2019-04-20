#include<stdio.h>
void input(int *x)
{
    scanf("%d",x);
    return;
}
void output(int n3,int d3)
{

    if(n3==d3)
    {
            printf("the sum of the given fraction is = 1");
    }
    else if(d3==1)
    {
            printf("the sum of the given fraction is = %d",n3);
    }
    else
    {
            printf("the sum the given fraction is = %d/%d",n3,d3);
    }
    return;
}
void add(int n1, int n2, int d1, int d2, int *n3, int *d3)
{
   *d3=d1*d2;
   *n3=(n1*d2)+(n2*d1);
   return;
}
int gcd(int n3, int d3)
{   int x;
    for(int i=1;((i<=n3)&&(i<=d3));i++)
    {
        if((n3%i==0)&&(d3%i==0))
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


    
    
    
