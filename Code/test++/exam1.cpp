#include<iostream>
using namespace std;

class CPLX
{
private:
    double a, b;
public:
    //CPLX() :a(0), b(0) { cout<<"CREATE(): "<<a<<" "<<b<<endl; }
    CPLX(double aa, double bb) :a(aa), b(bb) {  }//cout<<"CREATE(): "<<a<<" "<<b<<endl; }
  //  ~CPLX() { cout<<"RELEASE(): "<<a<<" "<<b<<endl; }
//    CPLX(const CPLX &q)
//    {
//        a = q.a;
//        b = q.b;
//        cout<<"COPY(): "<<a<<" "<<b<<endl;
//    }
    void print()
    {
        cout<<"PRINT(): "<<"("<<a<<", "<<b<<"i"<<")"<<endl;
    }
    CPLX &operator ++()
    {
        a+=1;
        return *this;
    }
    CPLX &operator --()
    {
        b-=1;
        return *this;
    }
    CPLX operator ++(int)
    {
        CPLX t = *this;
        (this->a)++;
        return t;
    }
    CPLX operator --(int)
    {
        CPLX t = *this;
        (this->b)--;
        return t;
    }
//    double real()const { return a; }
//    double imag()const { return b; }
//    CPLX &operator =(const CPLX &q)
//    {
//        this->a = q.a;
//        this->b = q.b;
//        cout<<"ASSIGNMENT(): "<<this->a<<" "<<this->b<<endl;
//        return *this;
//    }
};

int main()
{
    double a, b;
    while(cin >> a >> b)
    {
        CPLX cplx(a, b);
        cout << "=========================" << endl;

        cplx++.print();
        (++cplx).print();
        cplx.print();

        cout << "-------------------------" << endl;

        (--cplx).print();
        cplx--.print();
        cplx.print();
    }
    cout << "=========================" << endl;
}
