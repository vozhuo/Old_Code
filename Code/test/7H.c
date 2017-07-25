#include <stdio.h>
#include <string.h>
int main()
{
    int i = 1, n, m, j, a[100][1100], c, x, z;
    memset(a, 0, sizeof(a));
    scanf("%d", &n);
    for(x = 1; x <= n; x++)
    {
        scanf("%d", &z);
        for(j = 1; j <= z; j++)
            scanf("%d", &a[i][j]);
        a[i][0] = j - 1;
        if(i != 1)
        {
            if(a[i][0] > a[i - 1][0])
            {
                for(c = 1;  c <= a[i][0]; c++)
                {
                    if(c == a[i][0])
                        printf("%d", a[i][c] + a[i - 1][c]);
                    else
                        printf("%d ", a[i][c] + a[i - 1][c]);
                }
            }
            else
            {
                for(m = 1; m <= a[i - 1][0]; m++)
                {
                    if(m == a[i - 1][0])
                        printf("%d", a[i][m] + a[i - 1][m]);
                    else
                        printf("%d ", a[i][m] + a[i - 1][m]);
                }
            }
            printf("\n");
        }
        i++;
    }
    for(j = 1; j <= z; j++)
    {
        if(j == z)
            printf("%d", a[i - 1][j]);
        else
            printf("%d ", a[i - 1][j]);
    }
    printf("\n");
}
