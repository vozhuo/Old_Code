#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    double * a;
    a = (double *)malloc(300000);
    double n = 0;
    int i = 0, j;

    while((scanf("%lf", &n)) != -1)
    {
        a[i] = sqrt(n);
        i++;
    }

    for(j = i - 1; j >= 0; j--)
    {
        printf("%.4lf\n", a[j]);
    }
   free(a);
    return 0;
}
