#include<stdio.h>
int he(int n)
{
    int m=n,sum=0,i;
    for(i=n;i>0;i/=10)
        sum+=i%10;
    return sum;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",he(n));
}
