#include<stdio.h>
int main()
{
    int a, b, c, d, m, n, x, y, z, i;
    scanf("COCK,HEN,CHICK,MONEY,CHICKS");
    while(scanf("%d,%d,%d/%d,%d,%d", &a, &b, &c, &d, &m, &n) != -1)
    {
        i = 1;
        for(x = 0; x <= m / a; x++)
        {
            y = (m * d - c * n + c * x - a * d * x) / (b * d - c);
            z = n - x - y;
            if(x >= 0 && y >= 0 && z >= 0 && a * x + b * y + (z * c) / d == m && (z * c) % d == 0)
            {
               if(i == 1)
                printf("COCKS,HENS,CHICKS\n");
                printf("%d,%d,%d\n", x, y, z);
                i++;
            }
        }
         if(i == 1)
       printf("Cannot buy!\n");
       printf("\n");
    }
}
