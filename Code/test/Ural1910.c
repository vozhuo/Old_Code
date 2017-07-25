#include<stdio.h>
int main()
{
    int n, i, max, j=2;
    int a[1001], sum;
    scanf("%d", &n);
    for(i = 1; i <=n; i++)
    {
        scanf("%d", &a[i]);
    }
    max = a[1] + a[2] + a[3];
    for(i = 1; i <=n-2; i++)
    {
        sum = a[i] + a[i + 1] + a[i + 2];
        if(sum > max)
        {
            max = sum;
            j = i + 1;
        }
    }
    printf("%d %d", max, j);
}
