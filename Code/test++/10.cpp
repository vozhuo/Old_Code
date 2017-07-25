#include<iostream>
#include<string>
#include<map>
#include<cstdio>
using namespace std;

int main()
{
    int n, m, i;

    while(scanf("%d",&n)!=EOF)
    {
        multimap<string, string> qyz;
        multimap<string, string> ::iterator it;
        bool flag;
        string str1[n], str2[n];
        for(int i = 0; i < n; i++)
        {
            scanf("%s %s",&str1[i], &str2[i]);
            qyz.insert(make_pair(str1[i], str2[i]));
        }
        scanf("%d",&m);
        string str;
        for(int i = 0; i < m; i++)
        {
            //flag = true;
            scanf("%s",&str);
            for(it = qyz.begin(); it != qyz.end(); it++)
            {
                if(it->second == str)
                {
                    printf("%s\n",it->first.c_str());
                    flag = false;
                    break;
                }
            }
                if(flag)
                    printf("eh\n");
        }
    }
}
