#include<bits/stdc++.h>
using namespace std;

int main()
{
    string line;
    string val = "";
    //stringstream s;
    vector<string> q;
    vector<string>::iterator it;

    while(getline(cin, line))
    {
        for(int i = 0; i < line.length(); i++)
        {
            if(isalpha(line[i])) {
                if(line[i] >= 'A' && line[i] <= 'Z')
                {
                    line[i] += 32;
                }

                val += line[i];
            } else {
                if(val != "")
                {
                    q.push_back(val);
                    val = "";
                }
            }
        }
        if(val != "") {
            q.push_back(val);
            val = "";
        }
    }

    sort(q.begin(), q.end());
    it = unique(q.begin(), q.end()); //ШЅжи
    q.erase(it, q.end());

    for(it = q.begin(); it != q.end(); it++)
        if(it != --q.end())
            cout << *it << endl;
        else
            cout << *it;
}
