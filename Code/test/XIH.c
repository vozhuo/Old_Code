#include <stdio.h>
#include <string.h>
int arr[51][51];
int main()
{
    int n, i, j, num = 0;
    while(scanf("%d", &n) != EOF)
    {
        memset(arr, 0, sizeof(arr));
        i = 0;
        j = n - 1;
        num = 1;
        arr[i][j] = num;
        while(num < n * n)
        {
            while(i + 1 < n && arr[i + 1][j] == 0)
                arr[++i][j] = ++num;

            while(j - 1 >= 0 && arr[i][j - 1] == 0)
                arr[i][--j] = ++num;

            while(i - 1 >= 0 && arr[i - 1][j] == 0)
                arr[--i][j] = ++num;

            while(j + 1 < n && arr[i][j + 1] == 0)
                arr[i][++j] = ++num;
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

