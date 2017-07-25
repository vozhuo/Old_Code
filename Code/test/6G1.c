#include<stdio.h>
//#include<stdlib.h>
#include<math.h>
int main()
{
    double x1, y1, x2, y2;
    double a, b, r, d, k;
    scanf("%lf%lf", &x1, &y1);
    scanf("%lf%lf", &x2, &y2);
    scanf("%lf%lf%lf", &a, &b, &r);
    if(x1 == x2)
    {
        d = fabs(x1 - a);
    }
    else
    {
        k = (y1 - y2) / (x1 - x2);
        d = fabs(k * a - b + y1 - k * x1) / sqrt(1 + k * k);
    }
    if(d < r - 0.001)
    {
        printf("Interseetion\n");
    }
    if(d <=r + 0.001 && d >=r - 0.001)
    {
        printf("Tangency\n");
    }
    if(d > r + 0.001)
    {
        printf("Disjoint\n");
    }
}
