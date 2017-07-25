#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int swap_any(void *s, void *t, unsigned n)
{
    void * p;
    p = malloc(n);
    if(p == NULL)
        return 1;
    memcpy(p, s, n);
    memcpy(s, t, n);
    memcpy(t, p, n);
    free(p);
   return 0;
}
int main()
{
    int a, b;
    double x, y;
    char c, d;
    char s[1001], t[1001];

    gets(s);
    gets(t);
    swap_any(s, t, sizeof(s));
    printf("%s %s\n", s, t);

    c = getchar();
    getchar();
    d = getchar();
    getchar();
    swap_any(&c, &d, sizeof(char));
    printf("%c %c\n", c, d);

    scanf("%d %d", &a, &b);
    swap_any(&a, &b, sizeof(int));
    printf("%d %d\n", a, b);

    scanf("%lf %lf", &x, &y);
    swap_any(&x, &y, sizeof(double));
    printf("%lg %lg\n", x, y);
}
