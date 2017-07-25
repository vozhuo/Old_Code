#include<stdio.h>
int main()
{
    int a, k, i;
    unsigned int sum = 0, m = 1;
    scanf("%d", &k);

    if(k <=12)
    {
        for(i = 1; i <= k; i++)
        {
            for(a = i; a >= 1; a--)
            {
                m = m * a;
            }
            sum += m;
            m = 1;
        }
        printf("%u", sum);
    }
    else
    {
        printf("overflow\n");
    }
}
