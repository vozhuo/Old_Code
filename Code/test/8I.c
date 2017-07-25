#include<stdio.h>
#include<string.h>
char ch1[2000] = {};
char ch2[2000] = {};
char max[2000] = {};
char min[2000] = {};
int main()
{
    int count1, count2, da, xiao, i, a;

    while(scanf("%s %s", &ch1, &ch2) != EOF)
    {
        int n = 0;
        int c = 0;
        count1 = strlen(ch1);

        for(i = 0; i < (count1 / 2); i++)
        {
            a = ch1[i];
            ch1[i] = ch1[count1 - i - 1];
            ch1[count1 - i - 1] = a;
        }

        count2 = strlen(ch2);

        for(i = 0; i < (count2 / 2); i++)
        {
            a = ch2[i];
            ch2[i] = ch2[count2 - i - 1];
            ch2[count2 - i - 1] = a;
        }

        if(count2 < count1)
        {
            strcpy(max, ch1);
            strcpy(min, ch2);
        }
        else
        {
            strcpy(max, ch2);
            strcpy(min, ch1);
        }

        if(count1 > count2)
        {
            da = count1;
            xiao = count2;
        }
        else
        {
            da = count2;
            xiao = count1;
        }

        int k;

        for(i = 0; i < xiao; i++)
        {
            k = max[i] + min[i] + c - 96;

            if(k > 9)
            {
                c = 1;
                n++;
            }
            else
            {
                c = 0;
            }
        }

        int l;

        for(i = xiao; i < da; i++)
        {
            l = max[i] - 48 + c;

            if(l > 9)
            {
                n++;
                c = 1;
            }
            else
            {
                break;
            }
        }

        printf("%d\n", n);

        memset(ch1, 0, sizeof(ch1));
        memset(ch2, 0, sizeof(ch2));
        memset(max, 0, sizeof(max));
        memset(min, 0, sizeof(min));
    }
}
