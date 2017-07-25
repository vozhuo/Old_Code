#include<iostream>
#include<cstdio>
using std::cout;
using std::endl;

struct mycin
{
    bool e;
    mycin() { e = true; }
    operator bool(){return e;}
};
mycin cin;
mycin & operator >> (mycin & is, int & rhs)
{
    if(!is.e) return is;
    if(scanf("%d", &rhs)==EOF)
        is.e = false;
    return is;
}

class Date
{
private:
    int x,y,z;
public:
    Date(int x1 ,int y1,int z1)
    {
        x=x1;
        y=y1;
        z=z1;
    }
    void showDate()
    {
        printf("%04d-%02d-%02d",x,y,z);
    }
};

class Time
{
private:
    int a,b,c;
public:
    Time(int aa,int bb,int cc)
    {
        a=aa;
        b=bb;
        c=cc;
    }
    void showTime()
    {
        printf("%02d:%02d:%02d",a,b,c);
    }
};
int main()
{
    int cases;
    cin >> cases;
    for(int ca = 0; ca < cases; ca++)
    {
        int year, month, day;
        cin >> year >> month >> day;
        Date date(year, month, day);
        date.showDate();
        cout << " ";
        int hour, minute, second;
        cin >> hour >> minute >> second;
        Time time(hour, minute, second);
        time.showTime();
        cout << endl;
    }
}
