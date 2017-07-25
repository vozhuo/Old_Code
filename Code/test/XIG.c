#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char str[110000];
char ** s;
int main()
{
    int i, j, k, count;
    scanf("%d\n", &k);
    char * t;
    char ** s = (char **)malloc(sizeof(char *) * k);
    for(i = 0; i < k; i++)
    {
        gets(str);
        count = strlen(str);
        s[i] = (char *)malloc(sizeof(char) * count + 2);
        strcpy(s[i], str);
        memset(str, 0, sizeof(str));
    }
    for(i = 0; i < k; i++)
        for(j = i + 1; j < k; j++)
            if(strcmp(s[i], s[j]) > 0)
            {
                char * t = s[i];
                s[i] = s[j];
                s[j] = t;
            }
    for(i = 0; i < k; i++)
        puts(s[i]);
    for(i = 0; i < k; i++)
        free(s[i]);
}
