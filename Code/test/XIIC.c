#include <stdio.h>
#include <math.h>
int gcd(int a,int b)
{
    return b ? gcd(b, a % b) : a;
}
int main()
{
    int a, b, i, j,gc;
    double x, y, n, k,m;
    while(scanf("%lf%lf%lf", &x, &y, &n) != EOF)
    {
        gc = gcd(x, y);
        x = x / gc;
        y = y / gc;
//        printf("%lf\n",&x);
//         printf("%lf\n",&y);
        double min = 99;
        for(i = 1; i <= n; i++)
        {
            m = ((double)x / y) * i;
            if(m - (int)m > 0.5)
            {
                j = (int)m + 1;
            }
            else
            {
                j = (int)m;
            }
            k =  fabs((double)x / y - (double)j / i);
            if(k < min)
            {
                min = k;
                a = j;
                b = i;
            }
        }
        printf("%d/%d\n", a, b);
    }
}
