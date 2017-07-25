#include<stdio.h>
#include<string.h>
#include<malloc.h>
int i, M, N, max, min;
double * allocate(int n)
{
    double * p;
    p = (double *)malloc(n * sizeof(double));
    return p;
}
void input(double * p, int n)
{
    for(i = 0; i < n; i++)
        scanf("%lf", &p[i]);
}
void output(double * p, int n)
{
    scanf("%d%d", &M, &N);
    if(M > n || N < 1)
        printf("no output\n");

    max = (N > n) ? n : N;
    min = (M < 1) ? 0 : M - 1;

    for(i = min; i < max; i++)
        printf("%lg\n", p[i]);
}
void release(double * p)
{
    free(p);
}
int main()
{
    int len;
    double * array;
    scanf("%d", &len);
    array = allocate(len);
    input(array, len);
    output(array, len);
    release(array);
}
