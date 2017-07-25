#include<cstdio>
using namespace std;
#include<vector>
#include<map>
#include<string.h>
#include<queue>
const int MAX = 5000005;
//维护入度数组
int deg[MAX];
map<int, vector<int> > map_neighbor;
int T, N, M;
//统计去除的入度为0的结点
int coun;
int pre, nex;
queue<int> q_neightbor;
int main(void) {
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%d%d", &N, &M);
        memset(deg, 0, (N + 1)*sizeof(int));
        for (int j = 0; j < M; j++) {
            scanf("%d%d", &pre, &nex);
            map_neighbor[pre].push_back(nex);
            deg[nex]++;
        }
        //统计入度为0的结点，并加入队列；
        for (int j = 1; j <= N; j++) {
            if (!deg[j])  q_neightbor.push(j);
        }
        coun = 0;
        while (!q_neightbor.empty()) {
            int lesson = q_neightbor.front();
            q_neightbor.pop();
            coun++;
            for (auto k : map_neighbor[lesson]){
                deg[k]--;
                if (!deg[k]) q_neightbor.push(k);
            }
        }
        coun == N ? printf("Correct\n") : printf("Wrong\n");
    }
    return 0;
}
