//#pragma warning(disable:4996)
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

int n;
char board[104][104];
bool visited[104][104];

void bfs(int y, int x, bool isColorWeakness) {
	queue<pair<int, int>> q;
	q.push({ y,x });
	visited[y][x] = true;
	char color = board[y][x];

	while (!q.empty()) {
		int cy = q.front().first;
		int cx = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int ny = cy + dy[i];
			int nx = cx + dx[i];

			if (ny < 0 || ny >= n || nx < 0 || nx >= n)continue;
			if (visited[ny][nx])continue;

			//일반인
			if (!isColorWeakness) {
				if (board[ny][nx] == color) {
					visited[ny][nx] = true;
					q.push({ ny,nx });
				}
			}
			//적록색약
			else {
				if ((color == 'R' || color == 'G') && (board[ny][nx] == 'R' || board[ny][nx] == 'G')) {
					visited[ny][nx] = true;
					q.push({ ny,nx });
				}
				else if (color == 'B' && board[ny][nx] == 'B') {
					visited[ny][nx] = true;
					q.push({ ny,nx });
				}
			}
		}
	}
}


int main() {
	fastIO();

	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> board[i][j];
		}
	}
	int normalCount = 0;
	int colorWeaknessCount = 0;

	memset(visited, false, sizeof(visited));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!visited[i][j]) {
				bfs(i, j, true);
				colorWeaknessCount++;
			}
		}
	}

	memset(visited, false, sizeof(visited));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!visited[i][j]) {
				bfs(i, j, false);
				normalCount++;
			}
		}
	}

	cout << normalCount << " " << colorWeaknessCount << "\n";
}
