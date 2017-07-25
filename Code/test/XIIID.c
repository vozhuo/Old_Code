#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int a[1001][1091];
int b[1001];
int main()
{
    int M,j,n,i,k,l;
    double x1,x2,x3,x4,y1,y2,y3,y4;
    scanf("%d",&M);
    for(l=0;l<M;l++)
    {
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                scanf("%d",&a[i][j]);
            }
            scanf("%d",&b[i]);
        }
        k=1;

         while(1)
    {
        for(i = k + 1; i <= n; i++)
        {
            a[i][k] = a[i][k] / a[k][k];

        }
        for(i = k + 1; i <= n; i++)
        {
            for(j = k + 1; j <= n; j++)
            {

                a[i][j] = a[i][j] - a[i][k] * a[k][j];

            }
            b[i] = b[i] - a[i][k] * b[k];

        }
        if(k != (n - 1))
        {
            k++;
        }
        else
        {
            break;
        }
    }
    b[n] = b[n] / a[n][n];
    for(i = n - 1; i >= 1; i--)
    {
        for(j = i + 1; j <= n; j++)
        {
            b[i] -= a[i][j] * b[j];
        }
        b[i] = (1 / a[i][i]) * b[i];

    }
    for(i = 1; i <= n; i++)
    {
        printf("x%d=%.4lf\n",i,b[i]);
       // cout << "x" << i << " = " << b[i] << endl;
    }

    }

}
