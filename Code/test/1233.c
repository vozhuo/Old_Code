#include<stdio.h>
int main()
{
    int j, i, x;
    int c[100];
    while((scanf("%d", &x)) != -1)
    {
        if(x == 0)
            printf("0\n");
        else
        {
            for(i = 0; i <= 16; i++)
            {
                c[i]  = x % 2;
                x = x / 2;
            }
            for(i = 16; i >= 0; i--)
            {
                if(c[i] == 1)
                {
                    j = i;
                    break;
                }
            }
            for(i = j; i >= 0; i--)
            {
                printf("%d", c[i]);
            }
            printf("\n");
        }
    }
}
