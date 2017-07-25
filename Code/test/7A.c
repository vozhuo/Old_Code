#include <stdio.h>
#include<string.h>
#include<math.h>
char z[100];
int main()
{
    int j, i;
    int count;
    unsigned long long sum;
    while((gets(z)) != NULL)
    {
        sum = 0;
        j=0;
        count = strlen(z);
        for(i = count-1; i >= 0; i--)
        {
            sum+=((z[i] - '0')*pow(2,j));
             j++;
        }
        printf("%llu\n",sum);
      }
}


