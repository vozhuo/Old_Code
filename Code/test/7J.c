#include<stdio.h>
int s;
int z(int x)
{
    s=1;
    while(x!=1)
    {
        if(x%2==0)
            x/=2;
        else
             x=3*x+1;
        s++;
    }
    return s;
}
int a[1000001] = {0};
int main()
{
    int max, min, n, i, j, b, m, c;

    while((scanf("%d%d", &i, &j)) != EOF)
    {
        b = 0;
        if(i < j)
            max = j, min = i;
        else
            max = i, min = j;
        for(m = min; m <= max; m++)
        {

            if(a[m] != 0)
            {
                if(a[m] > b)
                    b = a[m];
            }
            else
            {
               a[m]=z(m);
                if(a[m]>b)
                    b=a[m];
            }

        }
        printf("%d %d %d\n", i, j, b);
    }
}
