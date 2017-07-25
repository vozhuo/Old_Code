#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_STR_LEN 101
char * trim(char *s)
{
      int count,i;
        count = strlen(s);
        for(i = count - 1;  isspace(s[i])!=0 ; i--)
            ;
        s[i + 1] = 0;
        for(i = 0;  isspace(s[i])!=0; i++)
            ;
       strcpy(s,&s[i]);
      return s;
}
int main()
{
    char str[MAX_STR_LEN], *p;
    do
    {
        gets(str);
        p = trim(str);
        puts(p);
    } while(strcmp(p, "END"));
    return 0;
}
