#include <bits/stdc++.h>
#define MAXSIZE 101
using namespace std;

typedef pair<int, int> Pair;
int m, w, n, s, p;
vector<Pair> v[MAXSIZE * 2 + 1];

struct School
{
    char name[11];
    int id, male, female, total;

    void print() {
        printf("%d %d %d\n", total, male, female);
    }
    void print_sort() {
        printf("%s %d %d %d\n", name, total, male, female);
    }
}sch[MAXSIZE];

bool cmp1(const School &s1, const School &s2) {
    return s1.id < s2.id;
}

bool cmp2(const School &s1, const School &s2) {
    return s1.total != s2.total ? s1.total > s2.total : s1.id < s2.id;
}

bool cmp3(const School &s1, const School &s2) {
    return s1.male != s2.male ? s1.male > s2.male : s1.id < s2.id;
}

bool cmp4(const School &s1, const School &s2) {
    return s1.female != s2.female ? s1.female > s2.female : s1.id < s2.id;
}

void match_info(int x)
{
    if (x < 1 || x > m + w) printf("query illegal sport-id\n");
    else
    {
        for (int i = 0; i < v[x].size(); i++)
            printf("%d %d\n", v[x][i].first, v[x][i].second);
    }
}

void score_info(int x)
{
    bool judge = true;
    int i;
    for (i = 0; i < n; i++)
    if (x == sch[i].id)
    {
        judge = false;
        break;
    }
    if (judge) printf("query illegal school-id\n");
        else sch[i].print();
}

void sort_info(int x)
{
    if (x == 1)
        sort(sch, sch + n, cmp1);
    else if (x == 2)
        sort(sch, sch + n, cmp2);
    else if (x == 3)
        sort(sch, sch + n, cmp3);
    else if (x == 4)
        sort(sch, sch + n, cmp4);
    for (int i = 0; i < n; i++)
        sch[i].print_sort();
}

void Init(int i, int k)
{
    while (k--)
    {
        scanf("%d%d", &s, &p);
        for (int j = 0; j < n; j++)
        {
            if (sch[j].id == s)
            {
                if (i <= m) sch[j].male += p;
                else sch[j].female += p;
                sch[j].total += p;
            }
        }
        v[i].push_back(Pair(s, p));
    }
}

int main()
{
    int k, que, x, q;
    while (~scanf("%d%d%d", &n, &m, &w))
    {
        for (int i = 0; i < n; i++)
            scanf("%d %s", &sch[i].id, sch[i].name);
        for (int i = 1; i <= m + w; i++)
        {
            scanf("%d", &k);
            Init(i, k);
        }
        scanf("%d", &q);
        while (q--)
        {
            scanf("%d", &que);
            if(que == 1)
            {
                scanf("%d", &x);
                match_info(x);
            }
            else
            {
                scanf("%d %d", &que, &x);
                if (que == 1)
                    score_info(x);
                else if(que == 2)
                    sort_info(x);
            }
        }
        for (int i = 0; i < MAXSIZE * 2 + 1; i++)
            v[i].clear();
    }
}
