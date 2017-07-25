#include<stdio.h>
#include<string.h>
#define MAX_STR_LEN 101
char * str_rev(char * t, char * s)
{
    int i;
    int count = strlen(s);
    for(i = 0; i < count; i++)
    {
        t[i] = s[count - 1 - i];
    }
    t[i] = 0;
    return t;
}
int main()
{
    char s[MAX_STR_LEN], str[MAX_STR_LEN], *p;
    gets(s);
    p = str_rev(str, s);
    puts(p);
    puts(str);
    return 0;
}
