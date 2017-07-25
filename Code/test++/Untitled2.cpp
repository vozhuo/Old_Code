#include <iostream>
#include <cstdio>
using namespace std;

char * mystrcpy(char * dst, const char * src)
{
    char * t = dst;
    while(*dst++ = *src++)
        ;
    return t;
}

char * mystrcat(char * dst, const char * src)
{
    char * t = dst;
    while(*t)
        t++;
    while(*t++ = *src++)
        ;
    return dst;
}

int mystrlen(const char * str)
{
    int i = 0;
    while(*str++)
        i++;
        return i;
}

class STR
{
private:
    char * s;
public:
    STR() { s = new char[1]; *s = 0; }
    STR(const char * a)
    {
        s = new char[mystrlen(a) + 1];
        for(int i = 0; a[i] != 0 || s[i] != 0; i++)
            s[i] = a[i];
    }
    int length()
    {
        int i;
        for(i = 0; s[i] != 0; i++)
            continue;
        return i;
    }
    int putline()
    {
        cout << s << endl;
    }

public:
    friend STR operator + (const STR & p1, const STR & p2)
    {
        STR p;
        p.s =  new char[mystrlen(p1.s) + mystrlen(p2.s) + 1];
        mystrcpy(p.s, p1.s);
        mystrcat(p.s, p2.s);
        return p;
    }
    STR & operator = (const STR & res)
    {
        if(s)
            delete []s;
        s = res.s;
        return *this;
    }
    STR & operator += (const STR & res)
    {
        mystrcat(s, res.s);
        return *this;
    }
};

int main()
{
    STR e;
    STR h("Hello World!");
    STR he = e + h;
    cout << he.length() << " ";
    he.putline();
    cout << e.length() << " ";
    e.putline();
    cout << h.length() << " ";
    h.putline();
    e += h;
    cout << e.length() << " ";
    e.putline();
    cout << h.length() << " ";
    h.putline();

    char s1[100001], s2[100001];

    while(gets(s1) != NULL && gets(s2) != NULL)
    {
        STR str1(s1), str2(s2);
        STR str = str1 + str2;
        cout << str.length() << " ";
        str.putline();
        cout << str1.length() << " ";
        str1.putline();
        cout << str2.length() << " ";
        str2.putline();
        str2 += str1;
        cout << str2.length() << " ";
        str2.putline();
        cout << str1.length() << " ";
        str1.putline();
    }
}
