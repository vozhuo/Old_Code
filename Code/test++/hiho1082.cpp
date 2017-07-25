#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    char c[210];
    string mar = "marshtomp";
    while(gets(c))
    {
        string s = "", cpy;
        cpy = c;
        int len = cpy.length();
        for(int i = 0; i < len; i++)
        {
            if(cpy[i]>='A'&&cpy[i]<='Z')
                s += (char)(cpy[i] - 'A' + 'a');
            else
                s+=cpy[i];
        }
        int x = 0;
        for(int i = 0; i < len; i++, x++)
        {
            int t = i,j = 0;
            while(s[t]==mar[j]&&t<len&&j<9)
                t++,j++;
            if(j==9)
            {
                cpy.replace(x, 9, "fjxmlhx");
                i+=8, x+=6;
            }
        }
       cout<<cpy<<endl;
    }
    return 0;
}
