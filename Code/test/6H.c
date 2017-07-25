#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n, a, b, k, i, j, sum = 0, x, y;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {


        scanf("%d%d%d", &a, &b, &k);
    for(j = a; j <= b; j++)
    {
        x = abs(j);
        while(x != 0)
        {
            if(x % 10)
            {
                sum += j;

            break;
            }
            else
                x /= 10;

        }

        printf("%d\n", sum);
    }
    }
}
