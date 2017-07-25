#include<iostream>
using namespace std;

int main()
{
    int n, m, res;
    cin>>n
        res = 0;
        for(int i = 0; i < n; i++)
        {
            cin>>m;
            for(int j = 0; j < n; j++)
                res ^= m;
        }
        if(res==0)
            cout<<"Alice"<<endl;
        else
            cout<<"Bob"<<endl;
    return 0;
}
