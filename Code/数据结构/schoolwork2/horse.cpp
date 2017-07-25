#include <iostream>
#include <iomanip>
#include <string.h>
#define MAX 10
using namespace std;

const int dx[] = {-2, -2, -1, -1, 1, 1, 2, 2};
const int dy[] = {-1, 1, -2, 2, -2, 2, -1, 1};

int chessboard[MAX][MAX];
bool visited[MAX][MAX];

bool dfs(int n, int x, int y, int step)
{
    chessboard[x][y] = step;
    visited[x][y] = true;
    if (step == n * n)
        return true;

    for (int i = 0; i < 8; i++)
    {
        int px = x + dx[i];
        int py = y + dy[i];
        if (px > 0 && px <= n && py > 0 && py <= n && !visited[px][py])
            if (dfs(n, px, py, step + 1))
                return true;
    }
    if (visited[x][y] = false)
        return true;
}

int main()
{
    int t, n, x, y, step = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> n >> x >> y;
        cout << "Case #" << i <<":" <<endl;
        if (dfs(n, x, y, step))
        {
            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= n; j++)
                    cout << setw(3) << chessboard[i][j];
                cout << endl;
            }
        }
        else
            cout << "No solution." <<endl;

        memset(chessboard, 0, sizeof(chessboard));
        memset(visited, 0, sizeof(visited));
    }
}
