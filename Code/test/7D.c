#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define N 101
int main()
{
    int i, count;
    char z[N];

    while(1)
    {
        gets(z);
        count = strlen(z);
//        for(i = count - 1;  isspace(z[i])!=0 ; i--)
//            ;
//        z[i + 1] = 0;
        for(i = 0;  isspace(z[i])!=0; i++)
            ;
        //  for(i =0;  i<=count-1 ; i++)
        printf("%s|\n", &z[i]);
        if(strcmp(&z[i], "END") == 0)
        {
            break;
        }
    }
}
