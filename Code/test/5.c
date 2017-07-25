#include <stdio.h>
int main()
{
    int a, b;
    char c;
    while(1)
    {
        scanf("%d%c%d", &a, &c, &b);
        if(a == 0 && b == 0 && c == 32)
            break;
        else
        {
            switch(c)
            {
            case '+':
                printf("%d\n", a + b);
                break;
            case '-':
                printf("%d\n", a - b);
                break;
            case '*':
                printf("%d\n", a * b);
                break;
            case '/':
                printf("%d\n", a / b);
                break;
            case '%':
                printf("%d\n", a % b);
                break;
            default:
                printf("invalid op\n");
            }
        }
    }
}
