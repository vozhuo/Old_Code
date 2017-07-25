#include <stdio.h>
int fun(int i, int a, int b, int c)
{
    if(i == 1)
        printf("   plate %d : from %d to %d\n",i, a, c);
    else
    {
        fun(i - 1, a, c, b);
        printf("   plate %d : from %d to %d\n",i, a, c);
        fun(i - 1, b, a, c);
    }
}
int main()
{
    int i,j=0,a,b,c;
     while(scanf("%d %d %d %d",&i,&a,&b,&c)!=EOF)
    {
        printf("case %d :\n",++j);
        fun(i, a,b,c);
        printf("\n");
    }
}
