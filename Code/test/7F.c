#include <stdio.h>
int main()
{
    int n, i, m, j;
    int a[50];
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        scanf("%d", &j);
        // for(m = 1;m <= j;m++)
        // {
        //  scanf("%d",&a[j]);
        if(j == 1)
            printf("1\n");
        if(j == 2)
            printf("2\n");
        if(j >= 3)
        {
            for(m = 3; m <= j; m++)
            {
                a[1] = 1;
                a[2] = 2;
                a[m] = a[m - 1] + a[m - 2];
                if(m == j)
                {
                    printf("%d\n", a[m]);
                    break;
                }
            }
        }
    }
}
