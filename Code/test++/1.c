#include<stdio.h>

int main()
{
    int t, j, n, i, l;
    scanf("%d",&t);
    for(j = 0; j < t; j++)
    {
        scanf("%d",&n);
        if(n!=1)
        {
            for(i = 1; i <= n*2; i++)
                for(l = 1; l <= n*5+i-1; l++)
                if(l==1||l==4)
                    printf("/");
                if(l==2||l==5)
                    printf("/");
            }
    }
}
