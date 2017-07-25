#include<stdio.h>
int hui(int n)
{
    int sum=0,m=n;
    while(m>0)
    {
        sum=sum * 10 + m % 10;
        m/=10;
    }
    return sum;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(hui(n)==n)
        printf("%d",n);
}
