#include<stdio.h>
int sum=0;
int add(int n)

{
     sum+=n;
     return sum;

}
int main()
{
    int min, max, sum;
    scanf("%d%d", &min, &max);
    while(min <= max)
        sum = add(min++);
    printf("%d", sum);
    return 0;
}
