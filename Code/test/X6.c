#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int arr[200][200];
int array[200][200];
int main()
{
    int M, i, a, b, j, k, a1, b1, time = 1;
    while(scanf("%d%d", &a, &b) != EOF)
    {
        if(a == 0 && b == 0)
            exit(0);
        if(time % 2 != 0)
        {
            for(j = 0; j < a; j++)
                for(k = 0; k < b; k++)
                {
                    scanf("%d", &arr[j][k]);
                    a1 = a, b1 = b;
                }
        }
        else
        {
            for(j = 0; j < a; j++)
                for(k = 0; k < b; k++)
                    scanf("%d", &array[j][k]);
            if((a1 == a && b1 == b))
            {
                for(j = 0; j < a; j++)
                {
                    for(k = 0; k < b; k++)
                    {
                        if(k == 0)
                            printf("%d", arr[j][k] + array[j][k]);
                        else
                            printf(" %d", arr[j][k] + array[j][k]);
                    }
                    printf("\n");
                }
                printf("\n");
                memset(arr, 0, sizeof(arr));
                memset(array, 0, sizeof(array));
            }
            else
                printf("Not satisfied the definition of matrix addition!\n\n");
        }
        time++;
    }
}
