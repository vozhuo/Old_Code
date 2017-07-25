#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int arr1[200][200] = {0};
int arr2[200][200] = {0};
int arr_sum[200][200] = {0};
int j, k;
int arr_1(int a, int b)
{
    for(j = 0; j < a; j++)
        for(k = 0; k < b; k++)
            scanf("%d", &arr1[j][k]);
}
int arr_2(int a, int b)
{
    for(j = 0; j < a; j++)
        for(k = 0; k < b; k++)
            scanf("%d", &arr2[j][k]);
}
int main()
{
    int a, b, a1 = 0, b1 = 0, time = 0, l;

    while(scanf("%d%d", &a, &b) != EOF)
    {
        if(a == 0 && b == 0)
            exit(0);
        if(time == 0)
        {
            arr_1(a, b);
            a1 = a, b1 = b;
            time++;
        }
        else
        {
            arr_2(a, b);
            if(b1 == a)
            {
                for(k = 0; k < a1; k++)
                    for(l = 0; l < b; l++)
                        for(j = 0; j < a; j++)
                            arr_sum[k][l] += (arr1[k][j] * arr2[j][l]);

                for(j = 0; j < a1; j++)
                    for(k = 0; k < b; k++)
                        arr1[j][k] = arr_sum[j][k];

                b1 = b;

                for(j = 0; j < a1; j++)
                {
                    for(k = 0; k < b; k++)
                    {
                        if(k==0)
                            printf("%d", arr_sum[j][k]);
                        else
                            printf(" %d", arr_sum[j][k]);
                    }
                    printf("\n");
                }
                printf("\n");
                memset(arr_sum, 0, sizeof(arr_sum));
                memset(arr2, 0, sizeof(arr2));
            }
            else
            {
                printf("Not satisfied the definition of matrix multiplication!\n\n");

                for(j = 0; j < a; j++)
                    for(k = 0; k < b; k++)
                        arr1[j][k] = arr2[j][k];

                a1 = a, b1 = b;
            }
        }
    }
}
