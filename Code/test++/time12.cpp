#include<iostream>
#include<iomanip>
#include<cstdio>
using namespace std;

class Time
{
private:
    int hh,mm,ss;
public:
    Time() {}
    Time(int h, int m, int s) : hh(h), mm(m),ss(s) {  }
    Time(const Time & p)
    {
        hh = p.hh;
        mm = p.mm;
        ss = p.ss;
    }
public:
    int hour() { return hh; }
    int minute() { return mm; }
    int second() { return ss; }
public:
    int hour(int h) { return hh = h; }
    int minute(int m) { return mm = m; }
    int second(int s) { return ss = s; }
public:
    Time& setTime(int h, int m, int s) { hh = h; mm = m; ss = s; }
    Time& setTime(const Time & p) {
        hh = p.hh;
        mm = p.mm;
        ss = p.ss;
        return *this;
    }
    Time& getTime() { return *this; }
public:
    Time& inputTime()
    {
        scanf("%d%d%d",&hh,&mm,&ss);
        return *this;
    }
    void showTime() const
    {
        if(!(hh>=0&&hh<=23)||!(mm>=0&&mm<=59)||!(ss>=0&&ss<=59))
            printf("Time error\n");
        else
            printf("%02d:%02d:%02d\n",hh,mm,ss);

    }
    void showTime12Hour() const
    {
        if(!(hh>=0&&hh<=23)||!(mm>=0&&mm<=59)||!(ss>=0&&ss<=59)) printf("Time error\n");
        else
        {
            int h = hh;
            if(h==0)
                h+=12;
            if(h>=13)
                h-=12;
            if(hh<12)
                 printf("%02d:%02d:%02d a.m.\n",h,mm,ss);

            else
                 printf("%02d:%02d:%02d p.m.\n",h,mm,ss);
        }
    }
};

int main()
{
    cout<<"Constant test output :"<<endl;
    const Time c(11, 59, 58);
    const Time cc(12, 0, 1);
    c.showTime12Hour();
    cc.showTime12Hour();
    c.showTime();
    cc.showTime();

    cout<<"\nTest data output :"<<endl;
    Time t;
    int cases;
    cin>>cases;
    for(int i = 1; i <= cases; ++i)
    {
        if(i % 4 == 0)
        {
            int hour, minute, second;
            cin>>hour>>minute>>second;
            Time tt(hour, minute, second);
            tt.showTime12Hour();
        }
        if(i % 4 == 1)
        {
            int hour, minute, second;
            cin>>hour>>minute>>second;
            t.setTime(hour, minute, second).showTime();
        }
        if(i % 4 == 2)
            t.inputTime().showTime12Hour();
        if(i % 4 == 3)
        {
            int hour, minute, second;
            cin>>hour>>minute>>second;
            t.hour(hour);
            t.minute(minute);
            t.second(second);
            t.showTime();
        }
    }
}
