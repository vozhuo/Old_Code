#include<stdio.h>
#include<string.h>
int a[200000], b[200000];
int main()
{
    int test, i, n, j;
    double ave=0, sum=0;

    scanf("%d", &test);
    for(i = 1; i <= test; i++)
    {
        sum = 0;
        scanf("%d", &n);
        if(n<=1)
            return main();
        for(j = 1; j <= n; j++)
        {
            scanf("%d", &a[j]);
            sum += a[j];
        }
        int k = 0, l = 1;
        for(j = 1; j <= n; j++)
        {
            ave = (sum - a[j]) / (n - 1);
            if(a[j] == ave)
            {
                k++;
                b[l] = j;
                l++;
            }
        }
        if(k == 0)
            printf("0\n");
        else
        {
            {
            printf("%d\n",k);
            for(j=1;j<=k;j++)
            {
                if(j==k)
                    printf("%d\n",b[j]);
                else
                    printf("%d ",b[j]);
            }
        }
             memset(a,0,sizeof(a));
             memset(b,0,sizeof(b));
        }
    }
}
