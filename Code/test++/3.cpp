#include<iostream>
using namespace std;
int hui(int n)
{
    int sum = 0, m = n;
    while(m > 0)
    {
        sum = sum * 10 + m % 10;
        m /= 10;
    }
    return sum;
}
int he(int n)
{
    int m = n, sum = 0, i;
    for(i = n; i > 0; i /= 10)
        sum += i % 10;
    return sum;
}
int main()
{
    int n, i, a, j,k = 1,c;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        c = 0;
        cin >> a;
        cout<<"Case :"<<k++<<endl;
        for(j = 10000; j < 1000000; j++)
        {
            if(he(j) == a && hui(j) == j)
            {
                c = 1;
                cout << j << endl;
            }
        }
        if(c == 0)
            cout<<"-1"<<endl;
    }
}
