#include<iostream>
#include<algorithm>
#include<set>
#include<iterator>
#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
    int n, m, num, k;
    while(cin >> num)
    {
        set<int>qyz1;
        while(1)
        {
            if(num != 0)
            {
             qyz1.insert(num);
             cin>>num;
             continue;
            }
           else
                break;
        }
        set<int>qyz2;
        while(1)
        {
            cin >> num;
            if(num != 0)
                qyz2.insert(num);
            else
                break;
        }
        k = 0;
//       if((getchar())==EOF)
//        {
//            break;
//        }
        set<int>::iterator iter;

        set<int>qyz;
        set_union(qyz1.begin(), qyz1.end(), qyz2.begin(), qyz2.end(), insert_iterator<set<int> >(qyz, qyz.begin()));

        set<int>qyz3;
        set_intersection(qyz1.begin(), qyz1.end(), qyz2.begin(), qyz2.end(), insert_iterator<set<int> >(qyz3, qyz3.begin()));

        set<int>qyz7;
        set_symmetric_difference(qyz.begin(), qyz.end(), qyz3.begin(), qyz3.end(), insert_iterator<set<int> >(qyz7, qyz7.begin()));

        for(iter = qyz7.begin(); iter != qyz7.end(); iter++)
        {
            k = 1;
            cout<<"NO"<<endl;
            break;
        }

        if(k==0)
         cout<<"YES"<<endl;
    }
}
