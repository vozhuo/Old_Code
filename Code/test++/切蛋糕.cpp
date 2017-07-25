#include<iostream>
#include<cstdio>
int a[1001];
int main()
{
    int i,t,j;
    a[1]=2;
    for(i=2;i<=1000;i++)
    {
        a[i]=a[i-1]+i*(i-1)/2+1;
    }
    scanf("%d",&t);
    for(j = 0; j < t; j++)
    {
        scanf("%d",&i);
        printf("%d\n",a[i]);
    }
}
