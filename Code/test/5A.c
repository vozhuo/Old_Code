#include<stdio.h>

    int is_leap_year(int a)
{
    if((a % 400==0)||((a%4==0)&&(a%100!=0)))
       return 1;
    else
        return 0;
}
int main()
{
    int year;

    scanf("%d", &year);
    is_leap_year(year) ? printf("Yes") : printf("No");

    return 0;
}
