#include <bits/stdc++.h>
#define MAX 50001

int father[MAX];
//初始化二叉树
void Initialize(int n)
{
    memset(father, 0, sizeof(father));
    for(int i = 0; i < n - 1; i++)
    {
        int u, v;
        scanf("%d %d", &u, &v);
        father[v] = u;
    }
}
//查找最小生成树
void searchTree(int q)
{
    while (q--)
    {
        int a, b, res = 0;
        bool visited[MAX];
        memset(visited, false, sizeof(visited));

        scanf("%d %d", &a, &b);
        for (int i = a; i != 0; i = father[i])
            visited[i] = true;
        for (int i = b; i != 0; i = father[i])
        {
            if (visited[i] == true)
            {
                res = i;
                break;
            }
        }
        printf("%d\n", res);
    }
}
int main()
{
    int n, q;
    while (scanf("%d%d", &n, &q)!=EOF && n)
    {
        Initialize(n);
        searchTree(q);
    }
}
