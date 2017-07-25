#include<stdio.h>
int arr[200][200];
int main()
{
    int M, i, a, b, j, k;
    scanf("%d", &M);
    for(i = 0; i < M; i++)
    {
        scanf("%d%d", &a, &b);

        for(j = 0; j < a; j++)
            for(k = 0; k < b; k++)
            {
                scanf("%d", &arr[j][k]);
            }
        for(j = 0; j < b; j++)
        {
            for(k = 0; k < a; k++)
            {
                if(k == 0)
                {
                    printf("%d", arr[k][j]);
                }
                else
                {
                    printf(" %d", arr[k][j]);
                }
            }
            printf("\n");
        }
        printf("\n");
    }
}
