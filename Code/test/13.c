#include <stdio.h>
int main()
{
    double C, F, i, j, m, n;
    char a, b;
    scanf("%c%->%c", &a, &b);
    scanf("%lf\n%lf\n%lf", &m, &n, &j);

    if(a == 'C')
    {
        printf("   C  ->    F\n");

        for(i = m; i <= n + 0.01; i += j)
        {
            F = 9 * i / 5 + 32;
            printf("%5.1lf -> %5.1lf\n", i, F);
        }
    }
    else
        if(a == 'F')
        {
            printf("   F  ->    C\n");

            for(i = m; i <= n + 0.01; i += j)
            {
                C = (i - 32) * 5 / 9;
                printf("%5.1lf -> %5.1lf\n", i, C);
            }
        }
}
