#include <stdio.h>
int main()
{
    int a, b, c, d, t;
    while((scanf("%d %d", &a, &b)) != EOF)
    {
        if(a == 0 && b != 0)
        {
            printf("%d %d\n", b, a);
        }
        else
            if(a != 0 && b == 0)
            {
                printf("%d %d\n", a, b);
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
                printf("%d %d\n", b, d / b);
        }
    }
}
