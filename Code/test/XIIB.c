#include<stdio.h>
#include<string.h>
typedef struct
{
    char name[100];
    int count;
    int yu;
    char ans[21];
} Choice;
int l;
int inputChoice(Choice re[], int N, int M)
{
    int i, j;

    for(i = 0; i < N; i++)
    {
        scanf("%s", &re[i].name);

        re[i].count = strlen(re[i].name);

        if(re[i].count > l)
        {
            l = re[i].count;
        }

        getchar();

        for(j = 0; j < M; j++)
        {
            scanf("%c", &re[i].ans[j]);
            getchar();
        }

        scanf("%d", &re[i].yu);
    }
}
int judge(Choice re[], int N, int M)
{
    int i, j, k;

    for(i = 0; i < N; i++)
    {
        int a = 0;
        printf("%s", re[i].name);
        for(k = re[i].count; k < l; k++)
        {
            printf(" ");
        }
        printf(":");
        for(j = 0; j < N; j++)
        {
            int same = 0;
            if(j == i)
                continue;
            for(k = 0; k < M; k++)
                if(re[i].ans[k] == re[j].ans[k])
                {
                    same++;
                }

            if(same >= re[i].yu)
            {
                if(a == 0)
                {
                    printf("%s", re[j].name);
                    a++;
                }
                else
                {
                    printf(",%s", re[j].name);
                }
            }
        }

        if(a == 0)
        {
            printf("NONE!");
        }

        printf("\n");
    }
}
int main()
{
    Choice re[101];
    int N, M;
    scanf("%d%d", &N, &M);
    inputChoice(re, N, M);
    judge(re, N, M);
     for(i = 0; i < N; i++)
     {
}
}
