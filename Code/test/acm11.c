#include <stdio.h>
#include<string.h>
char z[101];
int a[100000];
int main()
{
    int  i = 0, m, sum, x, j, n;
    int count;
    while((gets(z)) != NULL)
    {
        sum = 0;
        m = 1;
        x = 1;
        j = 0;
        count = strlen(z);
        for(i = 0; i < count; i++)
        {

            sum += z[i] - '0';
        }
        if(sum == 0)
       {
           printf("ling\n");
       }
       else
       {
            while(sum / x != 0)
            {
                a[j] = (sum / x) % 10;
                x *= 10;
                j++;
            }
            j -= 1;
            for(; j >= 0; j--)
            {
                if(j == 0)
                {
                    if(a[j] == 1)
                    {
                        printf("yi");
                    }
                    if(a[j] == 2)
                    {
                        printf("er");
                    }
                    if(a[j] == 3)
                    {
                        printf("san");
                    }
                    if(a[j] == 4)
                    {
                        printf("si");
                    }
                    if(a[j] == 5)
                    {
                        printf("wu");
                    }
                    if(a[j] == 6)
                    {
                        printf("liu");
                    }
                    if(a[j] == 7)
                    {
                        printf("qi");
                    }
                    if(a[j] == 8)
                    {
                        printf("ba");
                    }
                    if(a[j] == 9)
                    {
                        printf("jiu");
                    }
                    if(a[j] == 0)
                    {
                        printf("ling");
                    }
                }
                else
                {
                    if(a[j] == 1)
                    {
                        printf("yi ");
                    }
                    if(a[j] == 2)
                    {
                        printf("er ");
                    }
                    if(a[j] == 3)
                    {
                        printf("san ");
                    }
                    if(a[j] == 4)
                    {
                        printf("si ");
                    }
                    if(a[j] == 5)
                    {
                        printf("wu ");
                    }
                    if(a[j] == 6)
                    {
                        printf("liu ");
                    }
                    if(a[j] == 7)
                    {
                        printf("qi ");
                    }
                    if(a[j] == 8)
                    {
                        printf("ba ");
                    }
                    if(a[j] == 9)
                    {
                        printf("jiu ");
                    }
                    if(a[j] == 0)
                    {
                        printf("ling ");
                    }
                }
            }
      // printf("|");
            printf("\n");
        }
    }
}

