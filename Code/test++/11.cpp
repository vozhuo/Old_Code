#include<bits/stdc++.h>
using namespace std;

int gcd(int x,int y)
{
  return (y==0)? x : gcd(y, x % y);
}

class Fract
{
private:
    int n, m;
public:
    Fract(int nn, int mm)
    {
       n = nn/gcd(nn,mm);
       m = mm/gcd(nn,mm);
    }
    void show()
    {
        if(n==0||m==1)
            cout << n << endl;
        else if(n * m < 0)
            cout<<"-"<<fabs(n)<<"/"<<fabs(m)<<endl;
        else
            cout<<n<<"/"<<m<<endl;
    }
};

#include <cstdio>
int main()
{
    int n, m;
    while(cin >> n >> m)
    {
        Fract fr(n, m);
        fr.show();
    }
}
