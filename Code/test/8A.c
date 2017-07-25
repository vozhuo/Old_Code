#include<stdio.h>
#define MAX_SIZE 1001
int a[10000]={0};
int get_array(int a[], int n)
{
    int i;
    for(i=0;i<n&&i<MAX_SIZE;i++)
        scanf("%d",&a[i]);
    return n;
}
int min_index(int a[], int n)
{
    int i,min=10000,t;
     for(i=0;i<n&&i<MAX_SIZE;i++)
     {
        if(a[i]<min)
        {
         t=i;
        min=a[i];
        }
     }
     return t;
}
int main()
{
    int array[MAX_SIZE], size, index;

    scanf("%d", &size);
    get_array(array, size);
    index = min_index(array, size);
    printf("minimum number is %d, whose position is %d.", array[index], index);

    return 0;
}
