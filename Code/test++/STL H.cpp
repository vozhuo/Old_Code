#include <iostream>
#include <iomanip>
#include <string>
#include <stack>
using namespace std;

bool first(char c)
{
    return (c=='*');
}
bool second(char c) //优先级
{
    return (c=='+' || c=='-');
}

string shorten(string m)  //数字放左 符号放右
{
    stack<char> s;
    string ss;
    for(int i=0;i<m.size();i++)
    {
        if(isdigit(m[i])|| m[i]=='.')
        {
            while(isdigit(m[i]) || m[i]=='.')
                ss += m[i++];
            i--;
            ss += '#';
        }
        else if(second(m[i]))
        {
            while(s.size() && (second(s.top()) || first(s.top())))
            {
                ss+=s.top();
                s.pop();
            }
            s.push(m[i]);
        }
        else if(first(m[i]))
        {
            while(s.size() && first(s.top()))
            {
                ss+=s.top();
                s.pop();
            }
            s.push(m[i]);
        }
        else
            s.push(m[i]);
    }
    while(s.size())
    {
        ss+=s.top();
        s.pop();
    }
    return ss;
}

double ten(int n)
{
    double sum = 1;
    for(int i=0;i<n;i++)
        sum *= 10;
    return sum;
}

double double_num(string s)
{
    double sum = 0;
    int j = 0;
    char c;
    for(int i=1;i<=s.size();i++)
    {
        c=s[i-1];
        if(c=='.') j=i;
        else if(!j) sum = sum*10 + c-'0';
        else sum += (c-'0')/ten(i-j);
    }
   // cout<<sum<<endl;
    return sum;
}

double calculate(string s) //计算
{
    double sum, t;
    stack<double> n;
    string temp;
    for(int i=0;i<s.size();i++)
    {
        temp="";
        if(isdigit(s[i]) || s[i]=='.')
        {
            while(isdigit(s[i]) || s[i]=='.') temp+=s[i++];
            n.push(double_num(temp));
        }
        else
        {
            switch (s[i])
            {
                case '+': t=n.top(); n.pop(); t+=n.top();n.pop();n.push(t);break;
                case '-': t=n.top(); n.pop(); t=n.top()-t;n.pop();n.push(t);break;
                case '*': t=n.top(); n.pop(); t*=n.top();n.pop();n.push(t);break;
                default: break;
            }
        }
    }
    sum = n.top();
    return sum;
}

int main()
{
    int n;
    string m;
    while(cin>>n)
    {
        cin >> m;
        cout << fixed << setprecision(2) << calculate(shorten(m)) << endl;
    }
}
