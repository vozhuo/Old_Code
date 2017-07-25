#include<stdio.h>
int main()
{
    int n,i,sum,m,j;
    char a[80];
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        gets(a);
        m=1;
        sum=0;
        for(j=0; j<80; j++)
        {
            if(a[j]=='O')
            {
                sum+=m;
                m++;
            }
            else if (a[j]=='X')
                m=1;
            else
                break;
        }
        printf("%d\n",sum);
    }
    return 0;
}
