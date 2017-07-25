#include <bits/stdc++.h>
#define MAXSIZE 501
using namespace std;

struct Plane
{
    char id[26];
    char original[26], terminal[26];
    int start, arrive, price;

    void print()
    {
        printf("%s %s %s %d:%02d %d:%02d %d\n", id, original, terminal, start / 60, start % 60, arrive / 60, arrive % 60, price);
    }
    bool operator < (const Plane &p) const {
        if (start != p.start) return start < p.start;
        if (price != p.price) return price < p.price;
        return strcmp(id, p.id) < 0;
    }
}p[MAXSIZE];

vector<Plane> v;
int n;

void flight_info(char info[])
{
    bool judge = false;
    for (int i = 0; i < n; i++)
    {
        if (strcmp(p[i].id, info) == 0)
        {
            p[i].print();
            judge = true;
            break;
        }
    }
    if (!judge) printf("NO SUCH FLIGHT\n");
}
void original_info(char info[])
{
    for (int i = 0; i < n; i++)
    {
        if (strcmp(p[i].original, info) == 0)
            v.push_back(p[i]);
    }
    sort(v.begin(), v.end());
    if(v.size() != 0) for (int i = 0; i < v.size(); i++) v[i].print();
    else printf("NO SUCH FLIGHT\n");
}
void terminal_info(char info[])
{
    for (int i = 0; i < n; i++)
    {
        if (strcmp(p[i].terminal, info) == 0)
            v.push_back(p[i]);
    }
    sort(v.begin(), v.end());
    if(v.size() != 0) for (int i = 0; i < v.size(); i++) v[i].print();
    else printf("NO SUCH FLIGHT\n");
}
void time_info(int st_h, int st_m, int en_h, int en_m)
{
    int start = st_h * 60 + st_m;
    int arrive = en_h * 60 + en_m;
    for (int i = 0; i < n; i++)
    {
        if (p[i].start >= start && p[i].start <= arrive)
            v.push_back(p[i]);
    }
    sort(v.begin(), v.end());
    if(v.size() != 0) for (int i = 0; i < v.size(); i++) v[i].print();
    else printf("NO SUCH FLIGHT\n");
}

int main()
{
    int st_h, st_m, en_h, en_m, m;
    char query[26], info[26];

    while (~scanf("%d", &n))
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%s %s %s %d:%d %d:%d %d", p[i].id, p[i].original, p[i].terminal, &st_h, &st_m, &en_h, &en_m, &p[i].price);
            p[i].start = st_h * 60 + st_m;
            p[i].arrive = en_h * 60 + en_m;
        }
        scanf("%d", &m);
        while(m--)
        {
            scanf("%s", query);
            if(query[0] == 'F')
            {
                v.clear();
                scanf("%s", info);
                flight_info(info);
            }
            else if (query[0] == 'O')
            {
                v.clear();
                scanf("%s", info);
                original_info(info);
            }
            else if (query[1] == 'E')
            {
                v.clear();
                scanf("%s", info);
                terminal_info(info);
            }
            else if (query[1] == 'I')
            {
                v.clear();
                scanf("%d:%d %d:%d", &st_h, &st_m, &en_h, &en_m);
                time_info(st_h, st_m, en_h, en_m);
            }
        }
    }
}
