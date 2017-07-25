#include <stdio.h>
int gcd(int a, int b)
{
    int  c, d, t;

    if(a == 0 && b != 0)
    {
        return b;
    }
    else
        if(a != 0 && b == 0)
        {
            return a;
        }
        else
        {
            if(a < b)
            {
                t = a;
                a = b;
                b = t;
            }
            d = a * b;
            c = a % b;
            while(c != 0)
            {
                a = b;
                b = c;
                c = a % b;
            }
            return b;
        }
}
int lcm(int a, int b)
{
    int  c, d, t;
    if(a == 0 && b != 0)
    {

        return a;
    }
    else
        if(a != 0 && b == 0)
        {

            return b;
        }
        else
        {
            if(a < b)
            {
                t = a;
                a = b;
                b = t;
            }
            d = a * b;
            c = a % b;
            while(c != 0)
            {
                a = b;
                b = c;
                c = a % b;
            }
            return d / b;
        }
}

int main()
{
    int a, b;

    while(scanf("%d %d", &a, &b) != EOF)
    {
        printf("%d %d\n", gcd(a, b), lcm(a, b));
    }

    return 0;
}

