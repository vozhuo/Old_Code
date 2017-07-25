    #include<iostream>
    #include<string>
    #include<vector>
    using namespace std;
    vector<string> Split(string s,string pattern)
    {
        string::size_type pos;
        vector<string> result;
        s += pattern;
        for (int i = 0; i < s.size(); i++)
        {
            pos = s.find(pattern, i);
            if (pos < s.size())
            {
                result.push_back(s.substr(i, pos - i));
                i = pos + pattern.size() - 1;
            }

        }
        return result;
    }
    int Compare(string s1, string s2)
    {
        string::size_type s1_len = s1.size();
        string::size_type s2_len = s2.size();
        int i = 0;
        while (i < s1_len && i < s2_len)
        {
            if (s1[i] < s2[i])
            {
                return -1;
            }
            else if (s1[i]>s2[i])
            {
                return 1;
            }
            i++;
        }
        if (i < s1_len)
            return 1;
        if (i < s2_len)
            return -1;
        return 0;
    }
    void QuickSort(vector<string> &s, int p, int r)
    {
        if (p<r)
        {
            int i = p ;
            int j = r;
            string x = s[p];
            while (i<j)
            {
                while (i < j && Compare(s[j], x) == 1)
                    j--;
                if (i < j)
                    s[i++] = s[j];
                while (i < j && Compare(s[i], x) == -1)
                    i++;
                if (i < j)
                    s[j--] = s[i];
            }
            s[i] = x;
            QuickSort(s, p, i - 1);
            QuickSort(s, i + 1, r);
        }
    }

    void Print(string s)
    {
        vector<string> vstr;
        vstr = Split(s, " ");
        QuickSort(vstr, 0, vstr.size() - 1);
        for (int i = 0; i < vstr.size(); i++)
            cout << vstr[i] << ' ';
        cout << endl;
    }
    int main()
    {
        string str = "what are you doing";
        string str2 = "i am a student";
        string str3 = "Hello world!";

        Print(str);
        Print(str2);
        return 0;
    }
