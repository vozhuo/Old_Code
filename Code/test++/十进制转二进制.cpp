#include <iostream>
#include <bitset>
#include<string>
using namespace std;

int main()
{
    string st;
    cin>>st;
    bitset<32> a(st);
    cout << a.to_ulong() << endl;
}
