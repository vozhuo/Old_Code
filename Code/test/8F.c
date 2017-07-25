#include<stdio.h>
#define MAX_STR_LEN 101
int str_cmp(char s1[], char s2[])
{
    int k = 0;
    while(s1[k] != 0 && s2[k] != 0 && s1[k] == s2[k])
        k++;
    if(s1[k] - s2[k] == 32 || s1[k] - s2[k] == -32)
        return 0;
    else
        return s1[k] - s2[k];
}
int main()
{
    char str1[MAX_STR_LEN], str2[MAX_STR_LEN];

    while((gets(str1) != NULL) && (gets(str2) != NULL))
    {
        printf("%d\n", str_cmp(str1, str2));
    }

    return 0;
}
