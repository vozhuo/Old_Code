#include<stdio.h>
#include<string.h>
#define N 1500
int main()
{
    char ch[N], max[N], min[N], c[N];
    memset(ch, 0, sizeof(ch)), memset(max, 0, sizeof(max)), memset(min, 0, sizeof(min)), memset(c, 0, sizeof(c));
    int count, i, j = -1, n, m = 9999;
    while(scanf("%s", &ch) != -1)
    {
        memset(c, 0, sizeof(c));
        count = strlen(ch);
        for(i = 0; i < count; i++)
            c[i] = ch[count - 1 - i];
        memset(ch, 0, sizeof(ch));
        i = count - 1;
        while(c[i] == '0')
        {
            c[i] = '\0';
            i--;
        }
        i = count - 1;

        if(i == j)
        {
            n = i;
            while(n >= 0 && c[n] == max[n])
                n--;
            if(n == -1 && c[0] > max[0])
            {
                memset(max, 0, sizeof(max));
                strcpy(max, c);
                j = strlen(max) - 1;
            }
            if(n != -1 && c[n] > max[n])
            {
                memset(max, 0, sizeof(max));
                strcpy(max, c);
                j = strlen(max) - 1;
            }
        }
        if(i > j)
        {
            memset(max, 0, sizeof(max));
            strcpy(max, c);
            j = strlen(max) - 1;
        }

        if(i == m)
        {
            n = i;
            while(n >= 0 && c[n] == min[n])
                n--;
            if(n == -1 && c[0] < min[0])
            {
                memset(min, 0, sizeof(min));
                strcpy(min, c);
                m = strlen(min) - 1;
            }
            if(n != -1 && c[n] < min[n])
            {
                memset(min, 0, sizeof(min));
                strcpy(min, c);
                m = strlen(min) - 1;
            }
        }
        if(i < m)
        {
            memset(min, 0, sizeof(min));
            strcpy(min, c);
            m = strlen(min) - 1;
        }
    }
    if(j == -1)
        printf("The maximum value is : 0");
    else
    {
        printf("The maximum value is : ");
        for(n = j; n >= 0; n--)
            printf("%c", max[n]);
    }
    printf("\n");
    if(m == -1)
        printf("The minimum value is : 0");
    else
    {
        printf("The minimum value is : ");
        for(n = m; n >= 0; n--)
            printf("%c", min[n]);
    }
    printf("\n");
}
