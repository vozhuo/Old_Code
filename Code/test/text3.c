#include<stdio.h>
int main()
{
    int n, i, m, j, k, c;
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &m);

        if(m > 0)
        {
            c = 1;

            for(j = 1; j <= m; j++)
            {
                for(k = 1; k <= m - j; k++)
                {
                    printf(" ");
                }

                for(k = 1; k <= 2 * j - 1; k++)
                {
                    printf("%d", c);
                }

                c++;
                printf("\n");
            }

            printf("\n");
        }

        if(m < 0)
        {
            c = -m;

            for(j = 1; j <= -m; j++)
            {
                for(k = 1; k < j; k++)
                {
                    printf(" ");
                }

                for(k = 1; k <= 2 * c - 1; k++)
                {
                    printf("%d", c);
                }

                c--;
                printf("\n");
            }

            printf("\n");
        }
    }
}
