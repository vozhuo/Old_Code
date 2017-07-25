#include<iostream>
#include<iomanip>
using namespace std;
class time
{
private:
    int h, m, s;

public:
    time() {}
    time(int hh, int mm, int ss): h(hh), m(mm), s(ss) {}
    time & operator ++()
    {
        if(h >= 0 && h < 24 && m >= 0 && m < 60 && s >= 0 && s < 60)
        {
            s++;
            if(s >= 60)
            {
                s = 0;
                m++;
                if(m >= 60)
                {
                    m = 0;
                    h++;
                    if(h >= 24)
                        h = 0;
                }
            }
        }
        return *this;
    }
    time& operator ++(int)
    {
        time temp = *this;
        //++(*this);
        return temp;
    }
    friend istream & operator >> (istream & is, time & T)
    {
        return is >> T.h >> T.m >> T.s;
    }
    friend ostream & operator << (ostream & os, time & T)
    {
        return os << setw(2) << setfill('0') << T.h << ":" << setw(2) << setfill('0') << T.m << ":" << setw(2) << setfill('0') << T.s;
    }

};
int main()
{
    time t(0,0,1);
    cout << t++ << endl;
    cout << t++ << endl;
}
