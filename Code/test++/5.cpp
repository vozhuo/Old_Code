#include<iostream>
using namespace std;
int f(int n)
{
    int a,b,c,d,e,f;
    a = n/100000;
    b = (n/10000)%10;
    c = (n/1000)%100%10;
    d = (n/100)%1000%100%10;
    e = (n/10)%10000%1000%100%10;
    f = n%100000%10000%1000%100%10;
    if(a+b+c==d+e+f)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    while(cin>>n)
    {
        if(f(n+1)||f(n-1))
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
