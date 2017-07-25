#include<iostream>
#include<string>
#include<map>
#include<cstdio>
using namespace std;
map <char, int> price;

int add(string s)
{
    for(int i = 0; i < s.size(); i++)
        price[s[i]] = i + 1;
}

int main()
{
    add("abc");
    add("def");
    add("ghi");
    add("jkl");
    add("mno");
    add("pqr");
    add("stu");
    add("vwx");
    add("yz");
    add(".,!");
    add(" ");
    int sum = 0;
    char c;
    while((c = getchar()) != '\n')
    {
        sum += price[c];
    }
    cout << sum << endl;
    return 0;
}
