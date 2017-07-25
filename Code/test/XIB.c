#include<stdio.h>
#include<string.h>
#include<math.h>
#include<string.h>
#define MAX_STR_LEN 11
double strToDouble(char str[])
{
     int i, c = 1, j,  l = -1,k,p;
    char s[11]={0};
    double sum = 0, num = 0, sum2 = 0, num2 = 0, sum3 = 0, num3 = 0,b;
    int count = strlen(str);
    for(i = 0; i <= count-1 ; i++)
    {
        if(str[i] == '.')
            break;
    }
    c = 1;
   // b = 0;
    for(j = i - 1; j >= 0; j--)
    {
        if(str[j] >= '0' && str[j] <= '9')
        {
            b = str[j] - '0';
            sum += (b * c);
            c *= 10;
            num++;
        }
    }
     //printf("小数 %lg\n",sum);
    c = 1;
  //  b = 0;

        for(k = i; k <= count-1; k++)
        {
            if(str[k] >= '0' && str[k] <= '9')
            {
                c *= 10;
                b = str[k] - '0';
                sum += (b / c);
                num2++;
            }
        }
     // printf("整数 %lg\n",sum2);
   // sum3 = sum2 + sum;
   //  printf("和 %lg\n",sum3);
//    num3 = num2 + num;
//    if(num3 == 0)
//        return 0;
          for(i = 0;  i<=count-1; i++)
      {
          if((str[i]>='0'&&str[i]<='9')||str[i]=='.'||str[i]=='+'||str[i]=='-')
            break;
      }
    if(str[i]=='-')
        return -sum;
    else
        return sum;
    if(str[0] == 0)
        return 0;
}
int main()
{
    char s[MAX_STR_LEN];
    while(gets(s) != NULL)
        printf("%lg\n", strToDouble(s));
    return 0;
}

