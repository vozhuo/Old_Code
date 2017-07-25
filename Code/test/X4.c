#include<stdio.h>
#include<string.h>
#define MAX_STR_LEN 101
int strToInt(char str[101], int base)
{
    int i, c = 1, j, b, sum = 0, num = 0;
    int count = strlen(str);
    if(base == 10)
    {
        for(j = count - 1; j >= 0; j--)
        {
            if(str[j] >= '0' && str[j] <= '9')
            {
                b = str[j] - '0';
                sum += (b * c);
                c *= 10;
                num++;
            }
        }
    }
    if(base == 2)
    {
        for(j = count - 1; j >= 0; j--)
        {
            if(str[j] == '0' || str[j] == '1')
            {
                b = str[j] - '0';
                sum += (b * c);
                c *= 2;
                num++;
            }
        }
    }
    if(base == 8)
    {
        for(j = count - 1; j >= 0; j--)
        {
            if(str[j] >= '0' && str[j] <= '7')
            {
                b = str[j] - '0';
                sum += (b * c);
                c *= 8;
                num++;
            }
        }
    }
    if(base == 16)
    {
        for(j = count - 1; j >= 0; j--)
        {
            if(str[j] >= '0' && str[j] <= '9')
            {
                b = str[j] - '0';
                sum += (b * c);
                c *= 16;
                num++;
            }
            if(str[j] >= 'A' && str[j] <= 'F')
            {
                b = str[j] - '7';
                sum += (b * c);
                c *= 16;
                num++;
            }
            if(str[j] >= 'a' && str[j] <= 'f')
            {
                b = str[j] - 'W';
                sum += (b * c);
                c *= 16;
                num++;
            }
        }
    }
    if(num == 0)
        return 0;
    if(str[0] == '-')
        return -sum;
    else
        return sum;
    if(str[0] == '\0')
        return 0;
}

int main()
{
    int base;
    char s[MAX_STR_LEN];

    while((scanf("%d:", &base) != EOF) && (gets(s) != NULL))
    {
        printf("%d\n", strToInt(s, base));
    }

    return 0;
}
