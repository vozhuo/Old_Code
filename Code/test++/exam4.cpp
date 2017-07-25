#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iostream>
#include<algorithm>

using namespace std;


const int maxn = 11;
const int dx[] = {-2, -2, -1, -1, 1, 1, 2, 2};
const int dy[] = {-1, 1, -2, 2, -2, 2, -1, 1};

int n;
int ans[maxn][maxn];
bool used[maxn][maxn];


bool dfs(int x, int y, int d)
{
    ans[x][y] = d;
    used[x][y] = true;
    if (d == n * n) return true;

    for (int i = 0; i < 8; ++i)
    {
        int tx = x + dx[i];
        int ty = y + dy[i];
        if (tx > 0 && tx <= n && ty > 0 && ty <= n && !used[tx][ty])
        {
            if (dfs(tx, ty, d + 1)) return true;
        }
    }
    return used[x][y] = false;
}

int main()
{
    int T;
    cin >> T;
    for (int k = 1; k <= T; k++)
    {
        memset(ans, 0, sizeof(ans));
        memset(used, 0, sizeof(used));
        int x, y;
        cin >> n >> x >> y;
        cout << "Case #" << k <<":" <<endl;
        if (dfs(x, y, 1))
        {
            for (int i = 1; i <= n; ++i)
            {
                for (int j = 1; j <= n; ++j)
                    printf("%3d", ans[i][j]);
                cout << endl;
            }
        }
        else
            cout << "No solution." <<endl;
    }
}
