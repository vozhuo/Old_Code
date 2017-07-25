#include<iostream>
#include<string>
#include<algorithm>
#include<map>
using namespace std;

int main()
{
    int M, i, n;
    while(cin >> M)
    {
        map <string, int> qyz;
        map <string, int> ::iterator it;
        bool flag;
        for(i = 0; i < M; i++)
        {
            char s[110] = "";
            flag = true;
            cin>>s>>n;
           for(it = qyz.begin(); it != qyz.end(); it++)
           {
               if(it->first==s)
               {
                it->second += n;
                flag = false;
                break;
               }
           }
          if(flag)
            qyz.insert(make_pair(s,n));
        }
        for(it = qyz.begin(); it != qyz.end(); it++)
        {
            cout << it->first << ":" << it->second << endl;
        }
    }
}
