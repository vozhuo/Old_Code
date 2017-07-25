#include<stdio.h>
#define MAX_SIZE 1001
int num;
int getarray(int array[])
{
    num=0;
    int i;
    for(i=0;i<1001;i++)
    {
    scanf("%d",&array[i]);
    if(array[i]==0)
        break;
    else
       num++;
    }
    //printf("%d",num);
}
int insert(int array[], int key, int vol)
{
    int i;
    if(num+1>vol)
        return -2;
    for(i=0;i<num;i++)
    {
        if(array[i]==key)
            return -1;
    }
    for(i=1;i<num;i++)
    {
        if(i<num-1)
        {
        if(key>array[i-1]&&key<array[i])
        return i;
        }
        else
        {
            if(key>array[i])
                return i+1;
        }
     }
     if(key<array[0])
        return 0;
}
int result(int flag)
{
    if(flag==-1)
     printf("The key is already in this array!\n");
     else if(flag==-2)
     printf("The array if full!\n");
     else
     printf("The key is inserted in position %d.\n",flag);
}
int main()
{
    int array[MAX_SIZE], cases, i, key;
    scanf("%d", &cases);
    for(i = 1; i <= cases; i++)
    {
        getarray(array);
        scanf("%d", &key);
        result(insert(array, key, MAX_SIZE - 1));
    }
    return 0;
}
