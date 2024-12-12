#pragma warning(disable:4996)
#include <bits/stdc++.h>
using namespace std;
#define prev aaa
#define next aaaa
#define y1 aaaaa
const int INF = 987654321;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

const int dy[4] = { -1,0,1,0 };
const int dx[4] = { 0,1,0,-1 };

int board[502][502];
bool vis[502][502];
int n, m;

int main() {
    fastIO();

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> board[i][j];
        }
    }

    int mx = 0; // 그림의 최대값
    int num = 0; // 그림의 개수

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (board[i][j] == 0 || vis[i][j]) continue;
            num++;
            queue<pair<int, int>> q;
            vis[i][j] = true;
            q.push({ i,j });
            int area = 0;

            while (!q.empty()) {
                area++;
                pair<int, int> cur = q.front(); q.pop();
                for (int dir = 0; dir < 4; dir++) {
                    int ny = cur.first + dy[dir];
                    int nx = cur.second + dx[dir];
                    if (ny < 0 || ny >= n || nx < 0 || nx >= m)continue;
                    if (vis[ny][nx] || board[ny][nx] != 1) continue;
                    vis[ny][nx] = 1;
                    q.push({ ny,nx });
                }
            }
            mx = max(mx, area);
        }
    }
    cout << num << '\n' << mx;
}
