#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int j;
int num_0(int i, int n)
{
    if(i == 1 || i == 2 * n + 3)
    {
        for(j = 1; j <= n + 2; j++)
        {
            if(j == 1 || j == n + 2)
                printf(" ");
            else
                printf("-");
        }
    }
    else
        if(i == (2 * n + 3) / 2 + 1)
        {
            for(j = 1; j <= n + 2; j++)
                printf(" ");
        }
        else
        {
            for(j = 1; j <= n + 2; j++)
            {
                if(j == 1 || j == n + 2)
                    printf("|");
                else
                    printf(" ");
            }
        }
}
int num_1(int i, int n)
{
    if(i == 1 || i == 2 * n + 3 || (i == (2 * n + 3) / 2 + 1))
    {
        for(j = 1; j <= n + 2; j++)
            printf(" ");
    }
    else
    {
        for(j = 1; j <= n + 2; j++)
        {
            if(j == n + 2)
                printf("|");
            else
                printf(" ");
        }
    }
}
int num_2(int i, int n)
{
    if(i == 1 || i == 2 * n + 3 || (i == (2 * n + 3) / 2 + 1))
    {
        for(j = 1; j <= n + 2; j++)
        {
            if(j == 1 || j == n + 2)
                printf(" ");
            else
                printf("-");
        }
    }
    else
        if(i > 1 && i < (2 * n + 3) / 2 + 1)
        {
            for(j = 1; j <= n + 2; j++)
            {
                if(j == n + 2)
                    printf("|");
                else
                    printf(" ");
            }
        }
        else
        {
            for(j = 1; j <= n + 2; j++)
            {
                if(j == 1)
                    printf("|");
                else
                    printf(" ");
            }
        }
}
int num_3(int i, int n)
{
    if(i == 1 || i == 2 * n + 3 || (i == (2 * n + 3) / 2 + 1))
    {
        for(j = 1; j <= n + 2; j++)
        {
            if(j == 1 || j == n + 2)
                printf(" ");
            else
                printf("-");
        }
    }
    else
    {
        for(j = 1; j <= n + 2; j++)
        {
            if(j == n + 2)
                printf("|");
            else
                printf(" ");
        }
    }
}
int num_4(int i, int n)
{
    if(i == 1 || i == 2 * n + 3)
    {
        for(j = 1; j <= n + 2; j++)
            printf(" ");
    }
    else
        if(i == (2 * n + 3) / 2 + 1)
        {
            for(j = 1; j <= n + 2; j++)
            {
                if(j == 1 || j == n + 2)
                    printf(" ");
                else
                    printf("-");
            }
        }
        else
            if(i > 1 && i < (2 * n + 3) / 2 + 1)
            {
                for(j = 1; j <= n + 2; j++)
                {
                    if(j == 1 || j == n + 2)
                        printf("|");
                    else
                        printf(" ");
                }
            }
            else
            {
                for(j = 1; j <= n + 2; j++)
                {
                    if(j == n + 2)
                        printf("|");
                    else
                        printf(" ");
                }
            }
}
int num_5(int i, int n)
{
    if(i == 1 || i == 2 * n + 3 || (i == (2 * n + 3) / 2 + 1))
    {
        for(j = 1; j <= n + 2; j++)
        {
            if(j == 1 || j == n + 2)
                printf(" ");
            else
                printf("-");
        }
    }
    else
        if(i > 1 && i < (2 * n + 3) / 2 + 1)
        {
            for(j = 1; j <= n + 2; j++)
            {
                if(j == 1)
                    printf("|");
                else
                    printf(" ");
            }
        }
        else
        {
            for(j = 1; j <= n + 2; j++)
            {
                if(j == n + 2)
                    printf("|");
                else
                    printf(" ");
            }
        }
}
int num_6(int i, int n)
{
    if(i == 1 || i == 2 * n + 3 || (i == (2 * n + 3) / 2 + 1))
    {
        for(j = 1; j <= n + 2; j++)
        {
            if(j == 1 || j == n + 2)
                printf(" ");
            else
                printf("-");
        }
    }
    else
        if(i > 1 && i < (2 * n + 3) / 2 + 1)
        {
            for(j = 1; j <= n + 2; j++)
            {
                if(j == 1)
                    printf("|");
                else
                    printf(" ");
            }
        }
        else
        {
            for(j = 1; j <= n + 2; j++)
            {
                if(j == 1 || j == n + 2)
                    printf("|");
                else
                    printf(" ");
            }
        }
}
int num_7(int i, int n)
{
    if(i == 1)
    {
        for(j = 1; j <= n + 2; j++)
        {
            if(j == 1 || j == n + 2)
                printf(" ");
            else
                printf("-");
        }
    }
    else
        if(i == (2 * n + 3) / 2 + 1 || i == 2 * n + 3)
        {
            for(j = 1; j <= n + 2; j++)
                printf(" ");
        }
        else
        {
            for(j = 1; j <= n + 2; j++)
            {
                if(j == n + 2)
                    printf("|");
                else
                    printf(" ");
            }
        }
}
int num_8(int i, int n)
{
    if(i == 1 || i == 2 * n + 3 || (i == (2 * n + 3) / 2 + 1))
    {
        for(j = 1; j <= n + 2; j++)
        {
            if(j == 1 || j == n + 2)
                printf(" ");
            else
                printf("-");
        }
    }
    else
        if(i == (2 * n + 3) / 2 + 1 || i == 2 * n + 3)
        {
            for(j = 1; j <= n + 2; j++)
                printf(" ");
        }
        else
        {
            for(j = 1; j <= n + 2; j++)
            {
                if(j == 1 || j == n + 2)
                    printf("|");
                else
                    printf(" ");
            }
        }
}
int num_9(int i, int n)
{
    if(i == 1 || i == 2 * n + 3 || (i == (2 * n + 3) / 2 + 1))
    {
        for(j = 1; j <= n + 2; j++)
        {
            if(j == 1 || j == n + 2)
                printf(" ");
            else
                printf("-");
        }
    }
    else
        if(i > 1 && i < (2 * n + 3) / 2 + 1)
        {
            for(j = 1; j <= n + 2; j++)
            {
                if(j == 1 || j == n + 2)
                    printf("|");
                else
                    printf(" ");
            }
        }
        else
        {
            for(j = 1; j <= n + 2; j++)
            {
                if(j == n + 2)
                    printf("|");
                else
                    printf(" ");
            }
        }
}
int main()
{
    int  s, n, k,i,j;
    int a[20];
    while(scanf("%d%d", &s, &n) != EOF)
    {
        k = 0;
        memset(a, -1, sizeof(a));
        if(s == 0 && n == 0)
            exit(0);
        if(n == 0)
        {
            a[0] = 0;
            k = 1;
        }
        for(i = n; i > 0; i /= 10)
            a[k++] = i % 10;
        for(j = 1; j <= 2 * s + 3; j++)
        {
            for(i = k - 1; i >= 0; i--)
            {
                if(a[i] == 0)
                    num_0(j, s);
                if(a[i] == 1)
                    num_1(j, s);
                if(a[i] == 2)
                    num_2(j, s);
                if(a[i] == 3)
                    num_3(j, s);
                if(a[i] == 4)
                    num_4(j, s);
                if(a[i] == 5)
                    num_5(j, s);
                if(a[i] == 6)
                    num_6(j, s);
                if(a[i] == 7)
                    num_7(j, s);
                if(a[i] == 8)
                    num_8(j, s);
                if(a[i] == 9)
                    num_9(j, s);
                if(i == 0)
                    printf("\n");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
}
