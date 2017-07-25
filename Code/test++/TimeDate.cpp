#include<iostream>
#include<cstdio>
using namespace std;

class Date
{
private:
    int yy, mm, dd;
public:
    Date() :yy(1000),mm(10),dd(10){ cout<<"COPY   Date : ("<<yy<<", "<<mm<<", "<<dd<<")"<<endl; }
    Date(int y,int m,int d) :yy(y),mm(m),dd(d) { cout<<"CREATE Date : ("<<yy<<", "<<mm<<", "<<dd<<")"<<endl; }
    Date(const Date &d)
    {
        yy=d.yy;
        mm=d.mm;
        dd=d.dd;
        cout<<"COPY   Date : ("<<yy<<", "<<mm<<", "<<dd<<")"<<endl;
    }
    void showDate()
    {
        printf("%04d-%02d-%02d ",yy,mm,dd);
    }
public:
    int getYear()const{return yy;}
    int getMonth()const{return mm;}
    int getDay()const{return dd;}
    void setYear(int y=1){yy=y;}
    void setMonth(int m=1){mm=m;}
    void setDay(int d=1){dd=d;}
};

class Time
{
private:
    int hh, m_, ss;
public:
    Time() :hh(1),m_(1),ss(1){ cout<<"COPY   Time : ("<<hh<<", "<<m_<<", "<<ss<<")"<<endl; }
    Time(int h,int m,int s) :hh(h),m_(m),ss(s) { cout<<"CREATE Time : ("<<hh<<", "<<m_<<", "<<ss<<")"<<endl; }
    Time(const Time &d)
    {
        hh=d.hh;
        m_=d.m_;
        ss=d.ss;
        cout<<"COPY   Time : ("<<hh<<", "<<m_<<", "<<ss<<")"<<endl;
    }
    void showTime()
    {
        printf("%02d:%02d:%02d",hh,m_,ss);
    }
public:
    int getHour()const{return hh;}
    int getMinute()const{return m_;}
    int getSecond()const{return ss;}
    void setHour(int h=0){hh=h;}
    void setMinute(int m=0){m_=m;}
    void setSecond(int s=0){ss=s;}
};

class DateTime
{
private:
    Time time;
    Date date;
public:
    DateTime(const Date& d1,const Time& t1)
    {
        date=d1;
        time=t1;
        cout<<"CREATE DateTime : ("<<date.getYear()<<", "<<date.getMonth()<<", "<<date.getDay()<<") ("<<time.getHour()<<", "<<time.getMinute()<<", "<<time.getSecond()<<")"<<endl;
    }
    DateTime(const DateTime & datetime)
    {
        date=datetime.date;
        time=datetime.time;
        cout<<"COPY   DateTime : ("<<date.getYear()<<", "<<date.getMonth()<<", "<<date.getDay()<<") ("<<time.getHour()<<", "<<time.getMinute()<<", "<<time.getSecond()<<")"<<endl;
    }
    void showDateTime()
    {
        date.showDate();
        time.showTime();
    }
    void year(int y){date.setYear(y);}
    void month(int m){date.setMonth(m);}
    void day(int d){date.setDay(d);}
    void hour(int hh){time.setHour(hh);}
    void minute(int mm){time.setMinute(mm);}
    void second(int ss){time.setSecond(ss);}
    int year()const{return date.getYear();}
    int month()const{return date.getMonth();}
    int day()const{return date.getDay();}
    int hour()const{return time.getHour();}
    int minute()const{return time.getMinute();}
    int second()const{return time.getSecond();}
};

int main()
{
    const Date date(1000, 10, 10), dt(date);
    const Time time(1, 1, 1), tm(time);
    DateTime date_time(dt, tm);
    const DateTime cnt(date_time);
    cout << "DateTime : " << cnt.year() << " " << cnt.month() << " " << cnt.day();
    cout << " " << cnt.hour() << " " << cnt.minute() << " " << cnt.second();
    cout << endl;
    int cases;
    cin >> cases;
    for(int ca = 0; ca < cases; ca++)
    {
        int year, month, day;
        cin >> year >> month >> day;
        int hour, minute, second;
        cin >> hour >> minute >> second;
        date_time.year(year);
        date_time.month(month);
        date_time.day(day);
        date_time.hour(hour);
        date_time.minute(minute);
        date_time.second(second);
        date_time.showDateTime();
        cout << endl;
    }
}
