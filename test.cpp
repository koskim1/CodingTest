#include <bits/stdc++.h>
using namespace std;

#define y1 aaaa

int dy[4] = { -1, 0, 1, 0 };
int dx[4] = { 0, 1, 0, -1 };

int m, n, k, visited[104][104], a[104][104], x1, x2, y1, y2;
vector<int> ret;

int dfs(int y, int x) {
	visited[y][x] = 1;
	// 시작 정점의 ret은 1로 지정
	int ret = 1;
	for (int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (ny < 0 || nx < 0 || ny >= m || nx >= n || visited[ny][nx] == 1)continue;
		if (a[ny][nx] == 1)continue;
		ret += dfs(ny, nx);
	}
	cout << y << " : " << x << " : " << ret << "\n";
	return ret;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> m >> n >> k;
	for (int i = 0; i < k; i++) {
		cin >> x1 >> y1 >> x2 >> y2;
		for (int x = x1; x < x2; x++) {
			for (int y = y1; y < y2; y++) {
				a[y][x] = 1;
			}
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i][j] != 1 && visited[i][j] == 0) {
				ret.push_back(dfs(i, j));
			}
		}
	}
	sort(ret.begin(), ret.end());
	cout << ret.size() << "\n";
	for (int a : ret) cout << a << " ";
}
/*
1 : 2 : 1
1 : 3 : 2
0 : 3 : 3
0 : 2 : 4
0 : 1 : 5
1 : 0 : 6
0 : 0 : 7
4 : 2 : 1
4 : 3 : 2
4 : 4 : 3
3 : 4 : 4
2 : 4 : 5
2 : 5 : 6
3 : 5 : 7
4 : 5 : 8
4 : 6 : 9
3 : 6 : 10
2 : 6 : 11
1 : 6 : 12
0 : 6 : 13
4 : 0 : 1
3
1 7 13
*/