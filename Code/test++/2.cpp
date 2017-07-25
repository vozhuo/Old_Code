#include<iostream>
using namespace std;

int gcd(int x, int y)
{
    return (y == 0) ? x : gcd(y, x % y);
}

int min(int m, int n)
{
    return ((m * n) / gcd(m, n))  ;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b);
}
