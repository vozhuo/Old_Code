#include<stdio.h>
#define MAX_STR_LEN 1001
int str_chr(char s[], char ch)
{
    int i,l=0,c=0;
//    for(i=0;;i++)
//    {
//        if(s[i]!=0)
//            l++;
//    }
//  //  printf("%d\n",l);
   for(i=0;s[i]!=0;i++)
   {
       if(s[i]==ch)
       {
           c=1;
        break;
       }
   }
   if(c==1)
    return i;
   if(c==0)
       return -1;
}
int main()
{
    char ch;
    char s[MAX_STR_LEN];
    while(gets(s) != NULL)
    {
        ch = getchar();
        printf("%d\n", str_chr(s, ch));
        gets(s); // 仅用于读出字符后的换行符，以确保while循环内gets读到正确的数据，无其他意义，于理解题意无关。
    }
    return 0;
}
