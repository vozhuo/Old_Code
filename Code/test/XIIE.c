#include <stdio.h>
int k = 0, j = 0;
int output()
{
    int i;
    if(k != 0)
    {
        k = 0;
        putchar('\n');
        for(i = 0; i < 4 * j; i++)
            putchar(' ');
    }
}
int main()
{
    char c;
    int t = 0;
    while(scanf("%c", &c) != EOF)
    {
        switch(c)
        {
        case ' ':
        case 13:
        case 10:
        case 9:
            break;
        case '{':
            output();
            if(t == 0)
            {
                putchar('{');
                t = 1;
                k = 1;
            }
            else
            {
                putchar(' ');
                putchar('{');
            }
            k = 1;
            j++;
            break;
        case '}':
            j--;
            k = 1;
            output();
            putchar('}');
            break;
        case ';':
            putchar(';');
            k = 1;
            break;
        case ',':
            output();
            putchar(',');
            putchar(' ');
            break;
        default:
            output();
            putchar(c);
            break;
        };
    }
}
