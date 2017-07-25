#include<stdio.h>

int main()
{
    int b,i;
    char a[]="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    while((b=getchar())!=-1)
        {
            for(i=1;a[i]&&a[i]!=b;i++)
                ;
               if(a[i])
                putchar(a[i-1]);
               else
                putchar(b);
        }
        return 0;
}
