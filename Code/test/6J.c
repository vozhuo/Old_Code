#include<stdio.h>
#include<math.h>
int main()
{
    double a, b, c, x1, x2, q,u,v;
    int p;
    int i = 1;
    while((scanf("%lf%lf%lf", &a, &b, &c)) != EOF)
    {
        if(a == 0)
            break;
       else
       {
        p = (b * b - 4 * a * c);
        q = sqrt(p);
        printf("Case %d :\n", i);
        i++;
        printf("%lgx^2 + %lgx + %lg = 0\n", a, b, c);
        if(p == 0)
        {
            x1 = (q - b) / (2 * a);
            printf("only one real root : %lg\n", x1);
        }
        if(p > 0)
        {
            x1 = (q - b) / (2 * a);
            x2 = (-q - b) / (2 * a);
            printf("two real roots : %lg，%lg\n", x1, x2);
        }
     if(p < 0)
       {
            u=(-b)/(2*a);
           v=sqrt(-p)/(2*a);
            printf("two imaginary roots : %lg+%lgi , %lg-%lgi\n", u,v,u,v);
        }
        printf("\n");

       }
    }
}

