#include<iostream>
using namespace std;
#include<bits/stdc++.h>
class CPLX
{
private:
    double a, b;
public:
    CPLX() :a(0), b(0) {  }
    CPLX(double aa, double bb) :a(aa), b(bb) {  }//cout<<"CREATE(): "<<a<<" "<<b<<endl; }

    friend istream & operator >> (istream & is, CPLX & T)
    {
        return is >> T.a >> T.b;
    }
    friend ostream & operator << (ostream & os, CPLX & T)
    {
        return os << T.a << T.b<<"i";
    }
};

int main()
{
    CPLX cplx;
    double a, b;
    while(cin >> cplx)
        cout << cplx << endl;
}
