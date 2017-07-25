#include<stdio.h>
#define MAX_SIZE 1001

 int get_array(int a[])
 {
      int i=0;
    while(scanf("%d",&a[i])!=EOF)
        i++;
    return i;
 }
 int put_array(int a[], int n)
 {
     int j;
    for(j=0;j<n;j++)
    {
        if(j==n-1)
            printf("%d\n",a[j]);
        else
            printf("%d ",a[j]);
    }
 }
 int sort_array(int a[], int n)
 {
    int i,j,t;
    for(i=1;i<n;i++)
        for(j=0;j<n-i;j++)
         if(a[j]>a[j+1])
    {
        t=a[j];
        a[j]=a[j+1];
        a[j+1]=t;
    }
}

  int main()
{
    int array[MAX_SIZE], size;

    size = get_array(array);
    sort_array(array, size);
    put_array(array, size);

    return 0;
}
