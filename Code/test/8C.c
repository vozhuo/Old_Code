#include<stdio.h>
#define MAX_SIZE 1001
int get_array(int a[])
{
    int i, n;
    scanf("%d", &n);
    for(i = 0; i < n && i < 1001; i++)
        scanf("%d", &a[i]);
    return n;
}
int put_array(int a[], int n)
{
    int j;
    for(j = 0; j < n; j++)
    {
        if(j == 0)
            printf("%d", a[j]);
        else
            printf(",%d", a[j]);
    }
   // printf("\n");
}
int max_value(int a[], int n)
{
    int i, max = -1;
    for(i = 0; i < n && i < MAX_SIZE; i++)
    {
        if(a[i] > max)
            max = a[i];
    }
    return max;
}
int max_index(int idx[], int a[], int n)
{
    int i, j, k = 0, max = -1;
    for(i = 0; i < n; i++)
    {
        if(a[i] > max)
            max = a[i];
    }
    for(i = 0; i < n; i++)
    {
        if(a[i] == max)
        {
            idx[k] = i;
            k++;
        }
    }
    return k;
}





int main()
{
    int array[MAX_SIZE], size;
    int index[MAX_SIZE], idx_size;

    size = get_array(array);
    idx_size = max_index(index, array, size);
    printf("maximum number is %d, ", max_value(array, size));
    printf("whose positions are:");
    put_array(index, idx_size);

    return 0;
}
