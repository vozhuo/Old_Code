#include<iostream>
#include<string>
using namespace std;

int price(char c)
{
    if(c=='.'||c==' ') return 1;
    if(c==',') return 2;
    if(c=='!') return 3;
    return (c-'a') % 3 + 1;
}

int main()
{
    int sum = 0;
    string s;
    string::iterator it;
    getline(cin, s);
    for(it=s.begin(); it!=s.end(); it++)
        sum+=price(*it);
    cout<<sum<<endl;
    return 0;
}
