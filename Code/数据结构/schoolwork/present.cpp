#include<iostream>
#include<stdlib.h>
#include<deque>
using namespace std;

int main()
{
    int time, n, k, m, num, a;
    cin >> time;

    deque<int >present;
    for(int i = 1; i <= time; i++)
    {
        cout << "Case #" << i << " :" << endl;
        cin >> n >> k;

        for(int j = 0; j < n; j++)
        {
            cin >> m;

            if(m > 0)
            {
                while(m--)
                {
                    cin >> num;
                    present.push_back(num);
                }
            }
            else if(m < 0)
            {
               k+=abs(m);
            }
            else
            {
                a = present.size();
                if(k > a)
                    cout << a;
                else
                    cout << k;
                while(k != 0)
                {
                    if(!present.empty())
                    {
                        cout<< " " <<present.front();
                        present.pop_front();
                        k--;
                    }
                    else
                        break;
                }
                cout<<endl;
            }
        }
    }
}
