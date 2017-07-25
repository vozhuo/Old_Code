#include<stdio.h>
int main()
{
    int i, n, a[10001];
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    while((scanf("%d", &i)) != -1)
    {
        if(i > 0)
        {
            if(i > n)
            {
                printf("OUT OF RANGE\n");
            }
            else
            {
                printf("%d\n", a[i]);
            }
        }
        if(i < 0)
        {
            i = n + i + 1;
            if(i > n || i < 1)
            {
                printf("OUT OF RANGE\n");

            }
            else
            {
                printf("%d\n", a[i]);
            }
        }
    }
}





