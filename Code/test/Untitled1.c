#include<stdio.h>
int main()
{
    int n, count = 1, a, i, num;
    scanf("%d", &n);
    scanf("%d", &a);
    for(i = 1; i < n; i++)
    {
        scanf("%d", &num);
        if(num == a)
            count++;
        else
        {
            printf("%d %d ", count, a);
            count = 1, a = num;
        }
    }
    printf("%d %d", count, a);
    return 0;
}
