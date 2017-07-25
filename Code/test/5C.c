#include<stdio.h>
#include<math.h>
int is_primer(int n)
{
    int i;
    if(n == 1)
        return 0;
    else if(n == 2)
    return 1;
    else if
    (n % 2 == 0)
     return 0;
     else
    {

        for(i = 2; i <= sqrt(n); i++)
        {
            if(n % i == 0)
            {
                return 0;
                break;
            }
        }

        if(i > sqrt(n))
        {
            return 1;
        }
    }
}
int main()
{
    int num;

    while(scanf("%d", &num) != EOF)
    {
        if(is_primer(num))
        {
            puts("YES");
        }
        else
        {
            puts("NO");
        }
    }

    return 0;
}
