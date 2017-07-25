#include<stdio.h>
#include<string.h>
int main()
{
    int t, n ,i, j, l;
    char c;
    scanf("%d",&t);
    for(i = 0; i < t; i++)
    {
        char a[110] = {0};
        char b[110] = {0};
        scanf("%d",&n);

        for(j = 0; j < n; j++)
        {
             printf("+++");
            gets(a);

            b[j] = *a;
        }
        for(l = 0; l < n; l++)
        printf("%c",b[l]);
    }
}
