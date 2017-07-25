#include<stdio.h>
#include<string.h>
char arr[1001];
int main()
{
    int m, i, n, k, j, num, l;
    scanf("%d", &m);
    for(i = 0; i < m; i++)
    {
        scanf("%d %d", &n, &k);
        gets(arr);
        for(l = 0; l < n; l++)
        {
            gets(arr);
            num = 0;
            int count = strlen(arr);
            for(j = 0; j <= count - 1; j++)
            {
                if((arr[j] >= 'A' && arr[j] <= 'Z') || (arr[j] >= 'a' && arr[j] <= 'z'))
                {
                    if(arr[j] >= 'a' && arr[j] <= 'z')
                        arr[j] = arr[j] - 'a' + 'A';
                    if(arr[j] + k > 'Z')
                        arr[j] = arr[j] + k - 'Z' + 'A' - 1;
                    else
                        if(arr[j] + k < 'A')
                            arr[j] = arr[j] + k - 'A' + 'Z' + 1;
                        else
                            arr[j] = arr[j] + k;
                    num++;
                }
            }
            printf("%d ", num);
            for(j = 0; j <= count - 1; j++)
                if(arr[j] >= 'A' && arr[j] <= 'Z')
                    printf("%c", arr[j]);
            printf("\n");
        }
          printf("\n");
    }
}
