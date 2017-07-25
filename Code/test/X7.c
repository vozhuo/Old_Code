#include<stdio.h>
#include<ctype.h>
#include<string.h>
char arr[1001];
int main()
{
    int t, j, k, n;
    while(gets(arr) != NULL)
    {
        int  count = strlen(arr);
        n = 0;
        t = 0;
        for(j = 0; j < count; j++)
        {
            if(isalnum(arr[j]))
            {
                arr[t] = arr[j];
                if(arr[t] >= 'a' && arr[t] <= 'z')
                    arr[t] = arr[t] - 'a' + 'A';
                t++;
            }
        }
//        printf("%d\n",i);
//        printf("%d\n",j);
        arr[t] = 0;
        for(k = 0; k <= (t - 1) / 2; k++)
        {
            if(arr[k] != arr[t - 1 - k])
            {
                n++;
                printf("No.\n");
                break;
            }
        }
        if(n == 0)
            printf("Yes.\n");
    }
}
