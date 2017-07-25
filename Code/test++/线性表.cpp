#include<iostream>
#include <stack>
#include <cstdio>
#include <vector>
#include <cstring>
using namespace std;

int main()
{
    int a, b, c, x, y;
    char s[10];
    vector<int> v;
    while(cin>>s)
    {
        vector<int>(v).swap(v);
        //cout << v.capacity() << endl;
        if(strcmp(s, "Build") == 0)
        {
            cin >> x >> y;
            vector<int> v1(x, y);
            v = v1;
            //vector<int>(v1).swap(v1);
        }
        if(strcmp(s, "Modify") == 0)
        {
            cin >> a >> b;
            v.at(a) = b;
        }
        if(strcmp(s, "Insert") == 0)
        {
            cin >> a >> b >> c;
          //  vector<int > v2(v.begin(),v.end());
            v.insert(v.begin() + a, v.begin() + b, v.begin() + c+1);
            //vector<int>(v2).swap(v2);
        }
        if(strcmp(s, "Erase") == 0)
        {
            cin >> a >> b;
            v.erase(v.begin() + a, v.begin() + b+1);
        }
        if(strcmp(s, "Print") == 0)
        {
            cin >> a >> b;
            //cout << v.size() << endl;
            for(int i = a; i <= b && i <= v.size(); i++)
            {
                if(i == b||i==v.size())
                    cout << "[" << i << "]" << ":" << v[i] << endl;
                else
                    cout << "[" << i << "]" << ":" << v[i] << " ";
            }
        }
    }
}
