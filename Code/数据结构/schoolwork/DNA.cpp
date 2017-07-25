#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdio>
using namespace std;

#define maxn 11

string st[maxn];
int n;

void input()
{
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++)
        getline(cin, st[i]);
}

void work()
{
    string ans = "";
    for (int j = st[0].length(); j >= 3; j--)
    {
        for (int i = 0; i + j - 1 < st[0].length(); i++)
        {
            string temp = st[0].substr(i, j);
            bool ok = true;
            for (int k = 1; k < n; k++)
                if (st[k].find(temp) == string::npos)
                {
                    ok = false;
                    break;
                }
            if (ok && (ans == "" || ans > temp))
                ans = temp;
        }
        if (ans != "")
        {
            cout << ans << endl;
            return;
        }
    }
    printf("no significant commonalities\n");
}

int main()
{
    //freopen("D:\\t.txt", "r", stdin);
    int t;
    scanf("%d", &t);
    while (t--)
    {
        input();
        work();
    }
    return 0;
}
