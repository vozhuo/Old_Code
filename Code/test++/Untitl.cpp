#include<iostream>  
using namespace std;  
class Point  
{  
private:  double x,y;  
public:  
Point(double m,double n)  
{x=m;y=n;  
cout<<"Point : ("<<x<<", "<<y<<") is created."<<endl;  }  
Point()  {  
x=0;y=0;  
cout<<"Point : ("<<x<<", "<<y<<") is created."<<endl;  }  
Point(const Point & p1)  {  
x=p1.x;  y=p1.y;  
cout<<"Point : ("<<x<<", "<<y<<") is copied."<<endl;  }  
~Point()  {  
cout<<"Point : ("<<x<<", "<<y<<") is erased."<<endl;  }  
double getx(){return x;}  
void set(double x1,double y1){x=x1;y=y1;}  // void sety(double y1){y=y1;}  double gety(){return y;}  void show()  {  
cout<<"Point : ("<<x<<", "<<y<<")"<<endl;  }  };  
class Line  {  
private:  
Point p1,p2;  public:  
Line(double m1=0,double n1=0,double m2=0,double n2=0): p1(Point(m1,n1)), p2(Point(m2,n2))  {  
cout<<"Line : ("<<p1.getx()<<", "<<p1.gety()<<") to ("<<p2.getx()<<", "<<p2.gety()<<") is created."<<endl;  }  
Line( const Point & pp1, const Point & pp2 ):p1(pp1),p2(pp2)  {  
cout<<"Line : ("<<p1.getx()<<", "<<p1.gety()<<") to ("<<p2.getx()<<", "<<p2.gety()<<") is created."<<endl;  }  
~Line()  {  
cout<<"Line : ("<<p1.getx()<<", "<<p1.gety()<<") to ("<<p2.getx()<<", "<<p2.gety()<<") is erased."<<endl;  }  
void readLine()  {  









char c;  
double m1,n1,m2,n2;  
cin>>m1>>c>>n1>>m2>>c>>n2;  p1.set(m1,n1);p2.set(m2,n2);  
//cout<<"Line : ("<<m1<<", "<<n1<<") to ("<<m2<<", "<<n2<<")"<<endl;  }  
Line& setLine(const Line &l)  {  
p1=l.p1;  p2=l.p2;  return *this;  }  
Line & setLine(const Point &pp1,const Point &pp2)  {  
p1=pp1;  p2=pp2;  return *this;  }  
Line(const Line & l):p1(l.p1),p2(l.p2)  {  
// p1=l.p1;  // p2=l.p2;  
cout<<"Line : ("<<p1.getx()<<", "<<p1.gety()<<") to ("<<p2.getx()<<", "<<p2.gety()<<") is copied."<<endl;  }  
void show()  {  
cout<<"Line : ("<<p1.getx()<<", "<<p1.gety()<<") to ("<<p2.getx()<<", "<<p2.gety()<<")"<<endl;  }  };  
int main()  {  
int num, i;  
Point p(1, -2), q(2, -1), t;  t.show();  
std::cin>>num;  Line line[num];  
for(i = 0; i < num; i++)  {  
line[i].readLine();  line[i].show();  }  
Line l1(p, q), l2(p,t), l3(q,t), l4(l1);  









l1.show();  
l2.setLine(l1).show();  l3.show();  
l4.setLine(t,q).show();  }
