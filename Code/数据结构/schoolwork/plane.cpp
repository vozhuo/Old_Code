#include<iostream>
#include<string>
#include<deque>
#define MAX 11
using namespace std;

int main()
{
    int time, n, m, p, x, k, y;
    cin >> time;

    for(int i = 1; i <= time; i++)
    {
        deque<string>plane[MAX];
        char num[10];

        cout << "Case #" << i << " :" << endl;
        cin >> n >> m;

        for(int j = 0; j < m; j++)
        {
            cin >> p;

            if(p == 0)
            {
                cin >> x >> k;
                while(k--)
                {
                    cout << plane[x].front() << endl;
                    plane[x].pop_front();
                }
            }
            else if(p == 1)
            {
                cin >> num >> y;
                plane[y].push_back(num);

            }
            else if(p == 2)
            {
                    cin >> x;
                    if(i == time && j == m-1)
                        cout << plane[x].size();
                    else
                        cout << plane[x].size() << endl;
            }
        }
    }
}
