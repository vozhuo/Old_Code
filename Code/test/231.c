#include <stdio.h>
int main()
{
    double a, b, c, C, F, i;
    char d, g;
    scanf("%c->%c", &d, &g);
    if(d == 'C' && g == 'F')
    {
        scanf("%lf\n%lf\n%lf", &a, &b, &c);
        printf("   C  ->    F\n");
        for(i = a; i <= b + 0.01; i = i + c)
        {
            F = i * 9 / 5 + 32;
            printf("%5.1lf -> %5.1lf\n", i, F);
        }
    }
    else
    {
        scanf("%lf\n%lf\n%lf", &a, &b, &c);
        printf("   F  ->    C\n");
        for(i = a; i <= b + 0.01; i = i + c)
        {
            C = (i - 32) * 5 / 9;
            printf("%5.1lf -> %5.1lf\n", i, C);
        }
    }
    return 0;
}
