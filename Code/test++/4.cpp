#include<iostream>
using namespace std;
int main()
{
    int a, b, c, d, i = 0;
    cin >> a >> b >> c >> d;
    while(1)
    {
        if(a + b * i >= c - d * i)
        {
            cout << a + b * i << endl;
            break;
        }
        if(a + b * (i + 1) >= c - d * i)
        {
            cout << c - d * i << endl;
            break;
        }
        i++;
    }
    return 0;
}
