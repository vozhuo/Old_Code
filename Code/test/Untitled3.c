#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n,i,j,k,c;
    done:
    while(~scanf("%d",&n))
        {
    c=1;
    for(i=1;i<=100;i++)
        for(j=1;j<=100;j++)
             for(k=1;k<=100;k++)
             {
                 if(!(i!=k&&k!=j&&i!=j))
                    continue;
                 if((pow(i,n)+pow(j,n)==pow(k,n)))
                 {
                     c=0;
                     printf("%d %d %d\n",i,j,k);
                     goto done;
                 }
             }
    if(c==1)
        printf("-1\n");
    }
    return 0;
}
