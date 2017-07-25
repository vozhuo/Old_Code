#include<stdio.h>

int main()
{
    double l, p, q;
    scanf("%lf %lf %lf", &l, &p, &q);
    printf("%.3lf", (p/(p+q)*l));
}
