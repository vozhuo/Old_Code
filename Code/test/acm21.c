#include<stdio.h>
#include<stdlib.h>
int cmp(const int * a, const int * b)
{
    return *(int *)a - *(int *)b;
}
int qcmp(const int * a, const int * b)
{
    return *(int *)b - *(int *)a;
}
int a[100001];
int b[100001];
int main()
{
    int n, i;
    while(scanf("%d", &n) != EOF)
    {
        for(i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            b[i] = a[i];
        }
        qsort(a, n, sizeof(a[0]), cmp);
        qsort(b, n, sizeof(b[0]), qcmp);
        if(n % 2 == 0)
        {
            for(i = 0; i < n / 2; i++)
            {
                if(i == 0)
                    printf("%d %d", a[i], b[i]);
                else
                    printf(" %d %d", a[i], b[i]);
            }

            printf("\n");
        }
        else
        {
            for(i = 0; i < (n / 2) + 1; i++)
            {
                if(i == 0)
                {
                    if(n == 1)
                        printf("%d", a[i]);
                    else
                        printf("%d %d", a[i], b[i]);
                }

                if(i < (n / 2) && i > 0)
                    printf(" %d %d", a[i], b[i]);
                if(i == (n / 2) && n != 1)
                    printf(" %d", a[i]);
            }
            printf("\n");
        }
        printf("\n");
    }
}
