#include<stdio.h>
int main()
{
    int year, n, a, b, c, d;

    while(scanf("%d", &year) != EOF)
    {
        if(year < 1000||year > 9000)
            return main();
        for(n = year + 1; ; n++)
        {
            a = n % 10;
            b = (n / 100) % 10;
            c = (n / 10) % 10;
            d = n / 1000 % 10;
            //  printf("%d%d%d%d",a,b,c,d);
            if(a != b && a != c && a != d && b != c && b != d && c != d)
            {
                printf("%d\n", n);
                break;
            }
        }
    }
}
