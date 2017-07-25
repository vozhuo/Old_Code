#include<stdio.h>
char ch1[1000][1000];
char ch2[1000][1000];
double score[1000][1000];
double sum[1000]= {0};
double ave[1000]= {0};
int main()
{
    int m,n,j,i;
    scanf("%d %d",&m,&n);
    for(i=0;i<=m;i++)
    {
        scanf("%s",&ch1[i]);
      if(i==0)
      {
          for(j=1;j<=n;j++)
            scanf("%s",&ch2[j]);
      }
      else
      {
          for(j=1;j<=n;j++)
          {
          scanf("%lf",&score[i][j]);
           sum[i]+=score[i][j];
          }
      }
    }
      double sum2;
        for(j=1; j<=n; j++)
    {
        sum2=0;
        for(i=1; i<=m; i++)
        {
            sum2+=score[i][j];
        }
        ave[j]=sum2/m;
    }
    for(i=0; i<=m; i++)
    {
        printf("%-8s",ch1[i]);
        if(i==0)
        {
            for(j=1; j<=n; j++)
                printf("%7s",ch2[j]);
            printf("    sum\n");
        }
        else
        {
            for(j=1; j<=n; j++)
                printf("%7.1lf",score[i][j]);
            printf("%7.1lf\n",sum[i]);
        }
    }
    printf("average ");
    for(j=1; j<=n; j++)
        printf("%7.1lf",ave[j]);
    printf("\n");
}
