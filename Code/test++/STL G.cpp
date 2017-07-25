#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, num, t;
    cin >> t;

    for(int l = 1; l <= t; l++)
    {
        set<int>qyz1;
        set<int>qyz2;
        cin >> n;

        for(int i = 0; i < n; i++)
        {
            cin >> num;
            qyz1.insert(num);
        }

        cin >> m;

        for(int j = 0; j < m; j++)
        {
            cin >> num;
            qyz2.insert(num);
        }

        cout << "Case# " << l << ":" << endl;
        set<int>::iterator iter;
        cout << "A = {";

        for(iter = qyz1.begin(); iter != qyz1.end(); iter++)
        {
            if(iter == --qyz1.end())
                cout << *iter;
            else
                cout << *iter << ", ";
        }

        cout << "}" << endl;
        cout << "B = {";

        for(iter = qyz2.begin(); iter != qyz2.end(); iter++)
        {
            if(iter == --qyz2.end())
                cout << *iter;
            else
                cout << *iter << ", ";
        }

        cout << "}" << endl;
        set<int>qyz;
        set_union(qyz1.begin(), qyz1.end(), qyz2.begin(), qyz2.end(), insert_iterator<set<int> >(qyz, qyz.begin()));
        cout << "A u B = {";

        for(iter = qyz.begin(); iter != qyz.end(); iter++)
        {
            if(iter == --qyz.end())
                cout << *iter;
            else
                cout << *iter << ", ";
        }

        cout << "}" << endl;
        set<int>qyz3;
        set_intersection(qyz1.begin(), qyz1.end(), qyz2.begin(), qyz2.end(), insert_iterator<set<int> >(qyz3, qyz3.begin()));
        cout << "A n B = {";

        for(iter = qyz3.begin(); iter != qyz3.end(); iter++)
        {
            if(iter == --qyz3.end())
                cout << *iter;

            else
                cout << *iter << ", ";
        }

        cout << "}" << endl;
        set<int>qyz4;
        set_difference(qyz1.begin(), qyz1.end(), qyz2.begin(), qyz2.end(), insert_iterator<set<int> >(qyz4, qyz4.begin()));
        cout << "A - B = {";

        for(iter = qyz4.begin(); iter != qyz4.end(); iter++)
        {
            if(iter == --qyz4.end())
                cout << *iter;
            else
                cout << *iter << ", ";
        }

        cout << "}" << endl;
        set<int>qyz5;
        set_difference(qyz.begin(), qyz.end(), qyz1.begin(), qyz1.end(), insert_iterator<set<int> >(qyz5, qyz5.begin()));
        cout << "SA = {";

        for(iter = qyz5.begin(); iter != qyz5.end(); iter++)
        {
            if(iter == --qyz5.end())
                cout << *iter;
            else
                cout << *iter << ", ";
        }

        cout << "}" << endl;
        set<int>qyz6;
        set_difference(qyz.begin(), qyz.end(), qyz2.begin(), qyz2.end(), insert_iterator<set<int> >(qyz6, qyz6.begin()));
        cout << "SB = {";

        for(iter = qyz6.begin(); iter != qyz6.end(); iter++)
        {
            if(iter == --qyz6.end())
                cout << *iter;
            else
                cout << *iter << ", ";
        }

        cout << "}" << endl;
        set<int>qyz7;
        set_symmetric_difference(qyz.begin(), qyz.end(), qyz2.begin(), qyz2.end(), insert_iterator<set<int> >(qyz7, qyz7.begin()));
        cout << "xx = {";

        for(iter = qyz7.begin(); iter != qyz7.end(); iter++)
        {
            if(iter == --qyz7.end())
                cout << *iter;
            else
                cout << *iter << ", ";
        }
        cout << "}" << endl;
    }
}
