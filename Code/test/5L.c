#include<stdio.h>
int main()
{
    int i, k, n, a[10001], c, d;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    while((scanf("%d", &k)) != -1)
    {
        c = 1;
        d = 0;
        for(i = 1; i <= n; i++)
        {
            if(a[i] == k && c == 1)
            {
                printf("%d", i);
                c++;
                i++;
            }
            if(a[i] == k)
                printf(" %d", i);
            if(a[i] != k)
                d++;
            if(i == n && c > 1)
                printf("\n");
            if(d == n)
                printf("NOT FOUND\n");

        }
    }
}
