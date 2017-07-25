#include<stdio.h>
int main()
{
    int a, b, c;

    while((scanf("%d%d%d", &a, &b, &c)) != -1)
    {
        if(a == 0 && b == 0 && c == 0)
        {
            break;
        }

        if(a + b > c && a + c > b && b + c > a)
        {
            if(a > 0 && b > 0 && c > 0)
            {
                if(a == b && b == c)
                {
                    printf("a equileteral triangle\n");
                }
                else
                    if(a == b && b != c || b == c && c != a || a == c && c != b)
                    {
                        printf("a isosceles triangle\n");
                    }
                    else
                        if((a * a + b * b == c * c) || (b * b + c * c == a * a) || (a * a + c * c == b * b))
                        {
                            printf("a right triangle\n");
                        }
                        else
                        {
                            printf("a triangle\n");
                        }
            }
        }

        if((a * b == 0 && c != 0) || (b * c == 0 && a != 0) || (a * c == 0 && b != 0) || a + b <= c || a + c <= b || b + c <= a)
        {
            printf("not a triangle\n");
        }
    }
}
