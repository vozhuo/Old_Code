#include<iostream>
#include<string>
#include<map>
#include<cstdio>
using namespace std;

int main()
{
    int n, i, m;
    while(scanf("%d", &n) != EOF)
    {
        //bool flag;
        map<string, string> qyz;
        map<string, string> ::iterator it;
        char str[22], str1[22], str2[22];
        for(i = 0; i < n; i++)
        {
            scanf("%s %s", str1, str2);
            qyz.insert(make_pair(str2, str1));
        }
        scanf("%d", &m);
        for(i = 0; i < m; i++)
        {
         //   flag = true;
            scanf("%s", str);
            it = qyz.find(str);
            if(it != qyz.end())
                printf("%s\n", it -> second.c_str());
            else
                printf("eh\n");
        }
            qyz.clear();
    }
}
