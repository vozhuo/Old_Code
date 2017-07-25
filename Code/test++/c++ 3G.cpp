#include<iostream>
#include<iomanip>
using namespace std;

class Point
{
private:
    double x_,y_;
    static int n1, n2;
public:
    Point(double a,double b) { x_ = a; y_ = b; n1++; n2++; }
    Point() {x_ = 0; y_ = 0; n1++; n2++; }
    Point (const Point &p)
    {
        x_ = p.x_;
        y_ = p.y_;
        n1++; n2++;
    }
    ~Point() { n1--; }
   // double x() const { return x_; }
    //double y() const { return y_; }
    void set(double xx, double yy) { x_ = xx; y_ = yy; }
    static void showCounter()
    {
        cout << "Current" <<" : "<< n1 <<" points."<<endl;
    }
    static void showSum()
    {
        cout << "In total" <<" : "<< n2 <<" points."<<endl;
    }
};

class Line
{
private:
    Point p1,p2;
    static int m1,m2;
public:
    Line() { m1++; m2++; }
    Line(const Point &p, const Point &q):p1(p),p2(q) { m1++; m2++;}
    ~Line() { m1--; }
    void readLine()
    {
        char c; double a,b,X,Y;
        cin>>a>>c>>b>>X>>c>>Y;
        p1.set(a,b); p2.set(X,Y);
    }
    Line(const Line &a):p1(a.p1), p2(a.p2) { m1++; m2++; }
//    const Point& start()const { return p1;}
//    const Point& end() const { return p2;}
//    Line& setStart(Point& a) { p1 = a; return *this;}
//    Line& setEnd(Point& a) { p2 = a; return *this;}
    static void showCounter()
    {
        cout << "Current" <<" : "<< m1 <<" lines."<<endl;
    }
    static void showSum()
    {
        cout << "In total" <<" : "<< m2 <<" lines."<<endl;
    }

};

int Point::n1 = 0;
int Point::n2 = 0;
int Line::m1 = 0;
int Line::m2 = 0;

int main()
{
    int num, i;
    Point p(1, -2), q(2, -1), t;
    t.showCounter();
    t.showSum();
    std::cin>>num;
    Line line[num + 1];
    for(i = 1; i <= num; i++)
    {
        Line *l1, l2;
        l1->showCounter();
        l1->showSum();
        l1 = new Line(p, q);
        line[i].readLine();
        p.showCounter();
        p.showSum();
        delete l1;
        l2.showCounter();
        l2.showSum();
        q.showCounter();
        q.showSum();
    }
    Line l1(p, q), l2(p,t), l3(q,t), l4(l1);
    Line::showCounter();
    Line::showSum();
    Point::showCounter();
    Point::showSum();
    Line *l = new Line[num];
    l4.showCounter();
    l4.showSum();
    delete[] l;
    t.showCounter();
    t.showSum();
}
