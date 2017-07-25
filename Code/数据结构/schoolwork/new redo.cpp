#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; char ch; bool judge;
    cin >> t;

    deque<char>temp;
    deque<char>q;
    deque<char>::iterator it;

    while(t--)
    {
        judge = false;

        while(ch = getchar())
        {
            if(ch == '\n')
                continue;
            else if(ch == '#')
            {
                if(judge)
                    break;

                judge = true;
                continue;
            }
            else
            {
                if(judge == false)
                    q.push_back(ch);
                else
                {
                    if(ch == 'U')
                    {
                        temp.push_front(q.back());
                        q.pop_back();
                    }
                    else if(ch == 'R')
                    {
                        q.push_back(temp.front());
                        temp.pop_front();

                        for(it = q.begin(); it != q.end(); it++)
                            cout << *it;
                        cout << endl;
                    }
                    judge = false;
                }
            }
        }
        q.clear();
        temp.clear();
    }
}
