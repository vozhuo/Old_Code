#include<stdio.h>
#include<string.h>
int arr[101][101];
int main()
{
    int i, j, num, m, n,a,b,c;
    while(scanf("%d", &n) != EOF)
    {
        memset(arr, 0, sizeof(arr));
        i = 0;
        j = n / 2 ;
        arr[i][j] = 1;
        for(num = 2; num <= n * n; num++)
        {
            a=(i + n - 1) % n;
            b=(j + 1) % n;
            c= (i + 1) % n;
            if(arr[a][b] == 0)
            {
                i =a;
                j =b;
            }
            else
                i =c;
              //printf("%d %d\n",i,j);
            arr[i][j] = num;
        }
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < n; j++)
            {
                if(j == 0)
                    printf("%d", arr[i][j]);
                else
                    printf(" %d", arr[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
}
