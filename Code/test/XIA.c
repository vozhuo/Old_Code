#include<stdio.h>
#include<string.h>
#include<math.h>
#include<string.h>
#define MAX_STR_LEN 11
double strToDouble(char str[])
{
    int i, c = 1, j, b, l = 0;
    double sum = 0, num = 0, sum2 = 0, num2 = 0, sum3 = 0, num3 = 0;
    int count = strlen(str);

    for(j = 0; j <= count - 1; j++)
    {
        if(str[j] == '.')
        {
            l = j;
            break;
        }
    }

    c = 1;
    b = 0;

    for(j = count - 1; j >= l; j--)
    {
        if(l == 0)
        {
            break;
        }

        if(str[j] >= '0' && str[j] <= '9')
        {

            b = str[j] - '0';
            sum += (b * c);
            c *= 10;
            num++;
        }
    }

    sum = sum / (pow(10, num));
    //  printf("小数 %lg\n",sum);
    c = 1;
    b = 0;

    if(l != 0)
    {
        for(j = l; j >= 0; j--)
        {
            if(str[j] >= '0' && str[j] <= '9')
            {

                b = str[j] - '0';
                sum2 += (b * c);
                c *= 10;
                num2++;
            }
        }
    }
    else
    {
        c = 1;
        b = 0;

        for(j = count - 1; j >= 0; j--)
        {

            if(str[j] >= '0' && str[j] <= '9')
            {
                b = str[j] - '0';
                sum2 += b * c;
                c *= 10;
                num2++;
            }
        }
    }

    //  printf("整数 %lg\n",sum2);
    sum3 = sum2 + sum;
    //  printf("和 %lg\n",sum3);
    num3 = num2 + num;

    if(num3 == 0)
    {
        return 0;
    }

    if(str[0] == '-')
    {
        return -sum3;
    }
    else
    {
        return sum3;
    }

    if(str[0] == 0)
    {
        return 0;
    }
}
int main()
{
    char s[MAX_STR_LEN];

    while(gets(s) != NULL)
    {
        printf("%lg\n", strToDouble(s));
    }
    return 0;
}
