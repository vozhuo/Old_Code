#include<stdio.h>
int main()
{
    int i, k, n, a[10001], c;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    while((scanf("%d", &k)) != -1)
    {
        c = 1;
        for(i = n; i >= 1; i--)
        {
            if(a[i] == k)
            {
                printf("%d\n", i);
                break;
            }
            if(a[i] != k)
            {
                c++;
            }
            if(c == 11)
            {
                printf("NOT FOUND\n");
            }
        }

    }
}

