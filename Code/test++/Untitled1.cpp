#include <iostream>
using namespace std;

class STR
{
private:
    char *s;
public:
    STR() { s = new char[1]; *s = 0; }
    STR(const char *a)
    {
        s = new char[100002];
        for(int i = 0; a[i] != 0||s[i] != 0; i++)
            s[i] = a[i];
    }
    int length()
    {
        int i;
         for(i = 0; s[i] != 0; i++)
            continue;
         return i;
    }
    void putline()
    {
        cout << s << endl;
    }
};
int main()
{
    STR e;
    STR h("Hello World!");
    char s[100001];
    cout << e.length() << " ";
    e.putline();
    cout << h.length() << " ";
    h.putline();
    while(gets(s) != NULL)
    {
        STR str(s);
        cout << str.length() << " ";
        str.putline();
    }
}
