#include<iostream>
using namespace std;

class Complex
{
private:
    double r;
    double i;
public:
    void init(double rr, double ii) {r = rr; i = ii;}
    double real() {return r;}
    double image() {return i;}
};

int main()
{
    Complex a;
    a.init(2, 3);
    cout << a.real() << "+" << a.image() << "i" <<endl;
    return 0;
}
