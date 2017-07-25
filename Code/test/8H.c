#include<stdio.h>
#include<math.h>
int y(int x)
{
    int i, j = sqrt(x);
    if(x < 4&&x>1)
        return 1;
    if(x==1)
      return 0;
    if((x % 2) == 0)
        return 0;
    for(i = 3; i <= j; i += 2)
    {
        if((x % i) == 0)
            return 0;
    }
    return 1;
}
int f(int m, int n)
{
    int k = 1;
    while(m <= n)
    {
        if(y(m)!=0)
        {
            printf("%d\n", m);
            k = 0;
        }
        m++;
    }
    if(k!=0)
        printf("\n");
        printf("\n");
    return 0;
}
int main()
{
    int m, n;
    while(scanf("%d%d", &m, &n) != EOF)
    {
        if(m > 0 && m <= n && n <= 500000)
            f(m, n);
        else
            continue;
    }
    return 0;
}
