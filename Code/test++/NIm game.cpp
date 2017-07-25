#include<iostream>
using namespace std;

int main()
{
    int n, res = 0;
    char c;
    cin>>n;
    getchar();
    for(int i = 0; i < n; i++)
    {
        c = getchar();
        if(c=='H')
            res^=(i+1);
    }
    if(res==0)
        cout<<"Bob"<<endl;
    else
        cout<<"Alice"<<endl;
    return 0;
}
