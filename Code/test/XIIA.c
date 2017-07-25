#include<stdio.h>
#include<stdlib.h>

typedef struct
{
    int score[10];
    double aver;
    char name[81];
} Choice;
int cmp(const void * a , const void * b)
{
    return (*(Choice *)a).aver < (*(Choice *)b).aver ? 1 : -1;
}
int inputChoice(Choice peo[], int M, int N)
{
    int i, j;

    for(i = 0; i < M; i++)
    {
        scanf("%s", &peo[i].name);

        for(j = 0; j < N; j++)
        {
            scanf("%d", &peo[i].score[j]);
        }
    }
}
int sort(Choice peo[], int M, int N)
{
    int j, i, max, min, m, n;
    double sum;

    for(i = 0; i < M; i++)
    {
        sum = max = min = peo[i].score[0];

        for(j = 1; j < N; j++)
        {
            if(peo[i].score[j] > max)
            {
                max = peo[i].score[j];
            }

            if(peo[i].score[j] < min)
            {
                min = peo[i].score[j];
            }

            sum += peo[i].score[j];
        }

        peo[i].aver = (sum - max - min) / (N - 2);
    }

    qsort(peo, M, sizeof(peo[0]), cmp);
}
int main()
{
    Choice peoples[30];
    int M, N, i;
    scanf("%d%d", &M, &N);
    inputChoice(peoples, M, N);
    sort(peoples, M, N);

    for(i = 0; i < 3; i++)
    {
        printf("%s %.2lf\n", peoples[i].name, peoples[i].aver);
    }

    return 0;
}
