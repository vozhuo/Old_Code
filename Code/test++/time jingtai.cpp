#include<iostream>
#include<cstdio>
using namespace std;

#define while(ss) while(scanf("%d%d%d", &hour, &minute, &second)!=EOF)

class Time
{
private:
    int hh,mm,ss;
    static int sum;
public:
    Time(): hh(0), mm(0), ss(0) {}
    Time(int h, int m, int s) : hh(h), mm(m), ss(s) {}
    Time(const Time & p) : hh(p.hh), mm(p.mm), ss(p.ss)
    {
        printf("There was a call to the copy constructor : %d,%d,%d\n",hh,mm,ss);
    }
   // ~Time() {}
public:
    Time& setTime(int h, int m, int s) { hh = h; mm = m; ss = s; return *this;}
    Time& setTime(const Time & p)
    {
        hh = p.hh;
        mm = p.mm;
        ss = p.ss;
        return *this;
    }
    Time& getTime() { return *this; }
public:
    void showTime()
    {
        sum++;
        if(!(hh>=0&&hh<=23)||!(mm>=0&&mm<=59)||!(ss>=0&&ss<=59))
            printf("Time error\n");
        else
            printf("%02d:%02d:%02d\n", hh, mm, ss);
    }
    static int getNumber();
    static int displayNumber();
};

int Time::sum = 0;
int Time::getNumber()
{
    return sum;
}
int Time::displayNumber()
{
    printf("Now, There is %d object of Time.\n", sum++);
}

int main()
{
    cout<<"Static member test output :"<<endl;
    Time::displayNumber();
    Time t;
    t.displayNumber();
    Time tt(t);
    tt.displayNumber();
    Time ttt(1, 2, 3);
    ttt.displayNumber();
    Time tttt(ttt.getTime());
    tttt.displayNumber();
    int non_cases = Time::getNumber();

    cout<<"\nTest data output :"<<endl;
    int hour, minute, second;
    while(cin>>hour>>minute>>second)
    {
        Time t;
        t.setTime(hour, minute, second).showTime();
    }
    cout<<t.getNumber() - non_cases<<endl;
}
