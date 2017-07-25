#include <stdio.h>
int main()
{
    int a, b, c, d, m, n, x, y, z, i;
    scanf("COCK,HEN,CHICK,MONEY,CHICKS");

    while(scanf("%d,%d,%d/%d,%d,%d", &a, &b, &c, &d, &m, &n) != EOF)
    {
        i = 1;
        for(x = 0; x <= m / a; x++)
        {
            y = (m * d - c * n + c * x - a * d * x) / (b * d - c);
            z = n - x - y;
            if(x >= 0 && y >= 0 && z >= 0 && x * a + y * b + (z * c) / d == m && (c * z) % d == 0)
            {
                i = 2;

                if(i == 2)
                {
                    printf("COCKS,HENS,CHICKS\n");

                }

                printf("%d,%d,%d\n", x, y, z);
            }
        }

        if(i == 1)
        {
            printf("Cannot buy!");
            printf("\n");
        }

        printf("\n");
    }

    return 0;
}
