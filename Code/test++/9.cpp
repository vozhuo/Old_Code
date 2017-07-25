#include<iostream>
#include<iomanip>
using namespace std;
class Point
{
private:
    double x,y;
    static int i,j,v;
public:
    void show();
    static void showCounter();
    static void showSumOfPoint();
    Point():x(0),y(0) { i++; j++; }
    Point(double a,double b):x(a),y(b) { i++; j++; }
    Point(double c) { x = c; y = c; i++;j++;}
    ~Point(){i--; }
    Point(const Point & q):x(q.x),y(q.y)
    {
        i++;
        if(v==0)
            j++;
        v=-1;
    }
};
void Point::show()
{
    cout << setprecision(16)<<"Point : ("<<x<<", "<<y<<")"<<endl;
}
void Point::showCounter()
{
    cout << "Current : "<<i<<" points."<<endl;
}
void Point::showSumOfPoint()
{
    cout << "In total : "<<j<<" points."<<endl;
}
int Point::i(0);
int Point::j(0);
int Point::v(0);

void showPoint(Point q1, Point q2, Point q) { q1.show(); q2.show(); q.show(); }

int main()
{
    char c;
    double a, b;
    Point q;
    while(std::cin>>a>>c>>b)
    {
        Point p(a, b);
        p.show();
        p.showCounter();
    }
    q.showSumOfPoint();
    Point q1(q), q2(1);
    Point::showCounter();
    showPoint(q1, q2, q);
    Point::showSumOfPoint();
}
