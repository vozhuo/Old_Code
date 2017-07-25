#include<stdio.h>
#include<string.h>
int main()
{
    int i = 1, n, m, j, a[100][1100], c, x,z,k;
    memset(a, 0, sizeof(a));
    scanf("%d", &n);
    for(x = 1; x <= n; x++)
    {
        scanf("%d",&z);
        for(j = 1; j<=z; j++)
            scanf("%d", &a[i][j]);
        a[i][0] = j -1;
        i++;
        if(i>=3)
        for(k=3;k<=n+1;k++)
        {
            if(a[i - 1][0] > a[i - 2][0])
            {
                for(c = 1;  c <= a[i - 1][0]; c++)
                {
                    if(c == a[i - 1][0])
                    {
                        printf("%d", a[i - 1][c] + a[i - 2][c]);
                    }
                    else
                    {
                        printf("%d ", a[i - 1][c] + a[i - 2][c]);
                    }
                }
                printf("\n");
                memset(a, 0, sizeof(a));
            }
            else
            {
                for(m = 1; m <= a[i - 2][0]; m++)
                {
                    if(m == a[i - 2][0])
                    {
                        printf("%d", a[i - 1][m] + a[i - 2][m]);
                    }
                    else
                    {
                        printf("%d ", a[i - 1][m] + a[i - 2][m]);
                    }
                }
                printf("\n");
                memset(a, 0, sizeof(a));
            }
        }

        for(j = 1; j <= a[i - 1][0]; j++)
        {
            if(j != a[i - 1][0])
            {
                printf("%d ", a[i - 1][j]);
            }
            else
            {
                printf("%d", a[i - 1][j]);
            }
        }
    }
}


