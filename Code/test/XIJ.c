#include <stdio.h>
#include <string.h>
 char arr[101], str[101];
int main()
{
    char ch;
    int i = 0, j = 0, k = 0, l = 0;
    while((ch = getchar()) != EOF)
    {
        if(k == 1 && (ch >= 'A' && ch <= 'Z'||ch >= 'a' && ch <= 'z'))
                arr[i++] = ch;
		  if(k == 0 && (ch >= 'A' && ch <= 'Z'||ch >= 'a' && ch <= 'z'))
        {
            arr[i++] = ch;
            k = 1;
        }
		  if(k == 1 && (!(ch >= 'A' && ch <= 'Z')) && ch != ' ' || (k == 2 && ch != '('))
        {
            k = 0;
            i = 0;
        }
        if(k == 1 && ch == ' ')
                {
					arr[i] = 0;
                    k = 2;
                }
        if(k == 2 && ch == '(')
            k++;
        else if(k == 3 && ch != ')')
                str[j++] = ch;
		else if(k == 3 && ch == ')')
                {
                   str[j] = 0,  j = 0,   i = 0, k = 0;
                    l++;
                    if(l == 1)
                        printf("Abbreviation ==> Full Name\n");
                    if(l>= 1 && l < 10)
                        printf("%d:%10s ==> %s\n", l, arr, str);
                    if(l >= 10)
                        printf("%d:%9s ==> %s\n", l, arr, str);
                }
    }
    if(l == 0)
        printf("There is no abbreviations in this text.\n");
}
