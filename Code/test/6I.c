#include<stdio.h>
#define N 200000
int main()
{
    int n, i, max, min, s, b;
    int a[N];
    while((scanf("%d", &n) != -1))
    {
        if(n == 0)
        {
            return 0;
        }
        for(i = 1; i <= n; i++)
        {
            scanf("%d", &a[i]);
        }
        min = a[1];
        max = a[1];
        for(b = 2; b <= n; b++)
        {
            if(a[b] >= max)
            {
                max = a[b];
            }

            if(a[b] <= min)
            {
                min = a[b];
            }
        }
        s = (max - min) * 2;
        printf("%d\n", s);
    }
}


