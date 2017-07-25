#include<stdio.h>
#define MAX_SIZE 1001
int num;
int getkey(int key[])
{
    int i, n;
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &key[i]);
    }
}
int getarray(int array[])
{
    num = 0;
    int i;

    for(i = 0; i < 1001; i++)
    {
        scanf("%d", &array[i]);

        if(array[i] == 0)
        {
            break;
        }
        else
        {
            num++;
        }
    }
}
int insert(int array[], int key, int vol)
{
    int i, j;

    if(num + 1 > vol)
    {
        return -2;
    }

    for(i = 0; i < num; i++)
    {
        if(array[i] == key)
        {
            return -1;
        }
    }
    for(i = 0; i <= num; i++)
    {
        if(i <= num - 1)
        {

            if(key < array[i])
            {
                num++;

                for(j = num - 1; j > i; j--)
                {
                    array[j] = array[j - 1];
                }
                array[i] = key;
                return i;
            }
        }
        else
        {
            if(key > array[i])
            {
                num++;
                array[i] = key;
                return i;
            }
        }
    }

    if(key < array[0])
    {
        return 0;
    }
}
int result(int flag)
{
    if(flag == -1)
    {
        printf("The key is already in this array!\n");
    }
    else
        if(flag == -2)
        {
            printf("The array if full!\n");
        }
        else
        {
            printf("The key is inserted in position %d.\n", flag);
        }
}


int main()
{
    int array[MAX_SIZE], cases, ca, i, key[MAX_SIZE], size;
    scanf("%d", &cases);

    for(ca = 1; ca <= cases; ca++)
    {
        getarray(array);
        size = getkey(key);
        printf("Case %d:\n", ca);

        for(i = 0; i < size; i++)
        {
            result(insert(array, key[i], MAX_SIZE - 1));
        }
    }

    return 0;
}

