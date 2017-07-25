#include<stdio.h>
#include<string.h>
int main()
{
    int i, n, m, a[1001], b[1001];
     memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));
    while((scanf("%d", &n)) != -1)
    {
        for(i = 0; i < n; i++)
            scanf("%d", &a[i]);
        if((scanf("%d", &m)) != -1)
        {
            for(i = 0; i < m; i++)
                scanf("%d", &b[i]);
            if(m > n)
            {
                for(i = 0; i < m; i++)
                {
                    if(i == m-1)
                        printf("%d", a[i] + b[i]);
                    else
                        printf("%d ", a[i] + b[i]);
                }
                printf("\n");
                memset(a, 0, sizeof(a));
                memset(b, 0, sizeof(b));
            }
            else
            {
                for(i = 0; i < n; i++)
                {
                    if(i == n-1)
                        printf("%d", a[i] + b[i]);
                    else
                        printf("%d ", a[i] + b[i]);
                }
                printf("\n");
                memset(a, 0, sizeof(a));
                memset(b, 0, sizeof(b));
            }
        }
        else
        {
            for(i = 0; i < n; i++)
            {
                if(i == n-1)
                    printf("%d", a[i]);
                else
                    printf("%d ", a[i]);
            }
          //  printf("\n");
            break;
        }
    }
    return 0;
}
