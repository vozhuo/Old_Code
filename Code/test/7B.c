#include<stdio.h>
#include<string.h>
int main()
{
    int n, l, j;
    char a;
    char z[1001];
    int i = 1;
    scanf("%d", &n);
    a=getchar();
    for(j = 1; j <= n; j++)
    {
        gets(z);
        l = strlen(z);
        printf("case %d:length=%d.\n", i, l);
        i++;
    }
}

