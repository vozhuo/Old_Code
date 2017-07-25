#include<stdio.h>
#define N 200050
int main()
{
    int i, j, n, num, max;
    int a[N] = {};
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &num);

        a[num]++;
    }
    max = a[0];
    for(j = 1; j < N; j++)
    {
        if(a[j ] > max)
        {
            max = a[j ];
        }
    }
    printf("%d", max);
}
