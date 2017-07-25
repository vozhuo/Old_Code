#include<stdio.h>
int main()
{
    int i,j,n,a[10000];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    while((scanf("%d",&i))!=-1)
    {
        if(i>n||i<1)
        printf("OUT OF RANGE\n");
        else
        {
            j=a[i];
            printf("%d\n",j);
        }
    }
}
