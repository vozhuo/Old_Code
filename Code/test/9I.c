#include<stdio.h>
char str[1001];
int main()
{

    int i, a = 0,n;
    while(gets(str)!=NULL)
    {
          n = 0;
    for(i = 0; str[i] != 0; i++)
        if(('a' <= str[i] && str[i] <= 'z' || 'A' <= str[i] && str[i] <= 'Z'))
        {
            a = 0;
        }
        else if(a == 0)
            {
                a = 1;
                n++;
            }
    printf("%d\n", n);
    }
}
