#include<stdio.h>
#include<math.h>
int f(int n)
{
    if(n==1)
        return 1;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n % i==0)
            return 0;
    }
    return 1;
}
