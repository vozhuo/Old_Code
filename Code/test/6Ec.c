#include<stdio.h>
#define N 2000
int main()
{
    int i, t, a, j, m, x;
    int c[2000];
    scanf("%d", &m);
    for(x = 0; x < m; x++)
    {
        scanf("%d", &a);
        for(i = 0; i < a; i++)
        {
            scanf("%d", &c[i]);
        }
        for(i = 1; i < a; i++)
            for(j = 0; j < a - 1; j++)
                if(c[j] > c[j + 1])
                {
                    t = c[j];
                    c[j] = c[j + 1];
                    c[j + 1] = t;
                }
        for(i = 0; i < a; i++)
        {
        }
        for(i = 0; i < a; i++)
        {
            if(c[i + 1] == c[i])
            {
                printf("");
            }
            else
            {
                if(i == a - 1)
                {
                    printf("%d", c[i]);
                }
                else
                {
                    printf("%d ", c[i]);
                }
            }
        }
        //  printf("|");
        printf("\n");
    }
}
