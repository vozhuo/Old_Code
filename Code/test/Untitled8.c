#include<stdio.h>
int cmp(const void *a,const void *b)
{
    return *(double *)a > *(double *)b ? 1 : -1;
}
int main()
{
    double a[1001];
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%lf",&a[i]);
    qsort(a,n,sizeof(a[0]),cmp);
    for(i=0;i<n;i++)
        printf("%lg ",a[i]);
}
