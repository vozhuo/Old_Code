#include <bits/stdc++.h>
#define MAX 100001
using namespace std;

struct edge
{
    //定义边、权
    int u;
    int v;
    long long c;
};

int father[MAX]; //父节点
int son[MAX]; //子节点

//初始化数组
void Initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        father[i] = i;
        son[i] = 1;
    }
}
//权值排序
bool cmp(const edge & e1, const edge & e2)
{
    return e1.c < e2.c;
}
//查找根结点
int unionsearch(int x)
{
    return x == father[x] ? x : unionsearch(father[x]);
}
//合并u,v所在的集合//
bool join(int u, int v)
{
    int root1, root2;
    root1 = unionsearch(u);
    root2 = unionsearch(v);
    if(root1 == root2) //为环
        return false;
    else if(son[root1] >= son[root2])
    {
        father[root2] = root1;
        son[root1] += son[root2];
    }
    else
    {
        father[root1] = root2;
        son[root2] += son[root1];
    }
    return true;
}

int main()
{
    int t, n, m;
    long long c;
    int total, flag;
    long long cost;
    edge e[MAX];
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        cost = 0; total = 0; flag = 0;
        scanf("%d%d%lld", &n, &m, &c);
        //cin >> n >> m >> c;
        for(int j = 0; j < m; j++)
            cin >> e[j].u >> e[j].v >> e[j].c;
        printf("Case #%d: ", i);
        //cout << "Case #" << i <<": " ;

        Initialize(n);
        sort(e, e + m, cmp);
        for(int k = 0; k < m; k++)
        {
            if(join(e[k].u, e[k].v))
            {
                total++; //边数加1
                cost += e[k].c; //记录权值之和
            }
            if(total == n - 1) //最小生成树条件：边数=顶点数-1
            {
                flag = 1;
                break;
            }
        }
        if(flag)
            printf("%lld\n", cost * c);
            //cout << cost * c << endl;
        else
            printf("-1\n");
            //cout << "-1" <<endl;
    }
}
