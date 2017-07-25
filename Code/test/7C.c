#include <stdio.h>
#include<string.h>
char z[101];

int main()
{
    int  i,  sum, j, n;
    int count;
    scanf("%d", &n);
    for(j = 1; j <= n; j++)
    {
        scanf("%s", &z);
        sum = 0;
        count = strlen(z);
        for(i = 0; i < count; i++)
        {
            sum += z[i] - '0';
        }
        //printf("%d\n",sum);
        if(sum % 3 == 0)
            printf("Yes\n");
        else
            printf("No\n");
    }
}
