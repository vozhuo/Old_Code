#include<iostream>
using namespace std;

int main()
{
    int n, m, res;
    while(cin>>n)
    {
        res = 0;
        for(int i = 0; i < n; i++)
        {
            cin>>m;
            res^=m;
        }
        if(res==0)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }
    return 0;
}
