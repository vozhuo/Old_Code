#include <stdio.h>
#include <string.h>
char str1[101],str2[101];
int main()
{
    int a,b,c,d;
    while(gets(str1)!=NULL)
    {
        if(sscanf(str1, "%d.%d.%d.%d ",&a,&b,&c,&d)&& a>=0&&a<=255&&b>=0&&b<=255&&c>=0&&c<=255&&d>=0&&d<=255)
        {
            sprintf(str2, "%d.%d.%d.%d",a,b,c,d);
            if(strcmp(str2,str1)==0)
                printf("YES\n");
            else
                printf("NO\n");
        }
        else
            printf("NO\n");
    }
}
