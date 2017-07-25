#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#define MAXSIZE 20001
using namespace std;

struct Student
{
    int id;
    char name[21];
    int score[4];
    bool operator <(const Student &s) const {
        return id < s.id;
    }
    void print() {
        printf("%s %d", name, id);
        for(int i = 0; i < 3; i++) printf(" %d", score[i]);
        printf("\n");
    }
    int Sum() const
    {
        int sum = 0;
        for (int i = 0; i < 3; i++)
            sum += score[i];
        return sum;
    }
}stu[MAXSIZE];

bool cmp_score(const Student& s1, const Student& s2) {
    return s1.Sum() != s2.Sum() ? s1.Sum() > s2.Sum() : s1.id < s2.id;
}

bool cmp_id(const Student& s1, const Student& s2) {
    return s1.id < s2.id;
}

void binarySearch(int id, int n)
{
    int left = 0, right = n - 1;
    int middle;
    while (left <= right)
    {
        middle = (left + right) / 2;
        if (id == stu[middle].id) break;
        else if (id > stu[middle].id) left = middle + 1;
        else right = middle - 1;
    }
    if (middle >= n || stu[middle].id != id) printf("NOT FOUND\n");
        else stu[middle].print();
}

int main()
{
    int n, p, id;
    bool e;
    vector<Student> v;
    while(~scanf("%d%d", &n, &p))
    {
        for(int i = 0; i < n; i++)
        {
            e = false;
            scanf("%s %d", stu[i].name, &stu[i].id);
            for (int j = 0; j < 3; j++)
            {
                scanf("%d", &stu[i].score[j]);
                if (stu[i].score[j] < 60)
                    e = true;
            }
            if (e) v.push_back(stu[i]);
        }
        sort(v.begin(), v.end(), cmp_score);
        for (int i = 0; i < v.size(); i++)
            v[i].print();

        sort(stu, stu + n, cmp_id);
        while(p--)
        {
            scanf("%d", &id);
            binarySearch(id, n);
        }
    }
}
