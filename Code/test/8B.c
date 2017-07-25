#include<stdio.h>
#define MAX_SIZE 1001
int a[10000]={0};
int get_array(int a[])
{
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n&&i<MAX_SIZE;i++)
        scanf("%d",&a[i]);
    return i;
}
int put_array(int a[], int n)
{
    int j;
    for(j=n-1;j>=0;j--)
    {
        if(j==0)
            printf("%d",a[j]);
        else
            printf("%d ",a[j]);
    }
    printf("\n");
}
int reverse_array(int a[], int n)
{
    int i;
    for(i=n-1;i>=0;i--)
        return a[i];
}

int main()
{
    int cases, i;
    int array[MAX_SIZE], size;
    scanf("%d", &cases);
    for(i = 1; i <= cases; i++)
    {
        size = get_array(array);
        reverse_array(array, size);
        printf("case %d:", i);
        put_array(array, size);
    }
    return 0;
}
