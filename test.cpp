﻿#include <bits/stdc++.h>
using namespace std;

int dy[] = { -1,0,1,0 };
int dx[] = { 0,1,0,-1 };

int n, m, cnt, cnt2, a[104][104], visited[104][104];
vector<pair<int, int>> v;

void go(int y, int x) {
	visited[y][x] = 1;
	// 치즈가 있다면 벡터에 위치값 넣고 바로 반환.(내부에 못들어가게)
	if (a[y][x] == 1) {
		v.push_back({ y,x });
		return;
	}
	for (int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (ny < 0 || ny >= n || nx < 0 || nx >= m || visited[ny][nx])continue;
		go(ny, nx);
	}
	return;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	while (true) {
		fill(&visited[0][0], &visited[0][0] + 104 * 104, 0);
		v.clear();
		go(0, 0);
		cnt2 = v.size();
		// 벡터에 들어있는 치즈 녹이는 과정
		for (pair<int, int> b : v) {
			a[b.first][b.second] = 0;
		}
		// 더이상 남아있는 치즈가 없다면 bool값 0 반환해서 while문 종료,
		bool flag = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (a[i][j] != 0) flag = 1;
			}
		}
		cnt++;
		if (!flag)break;
	}
	// cnt는 몇번 녹였는지, cnt2에는 마지막 남아있던 치즈들의 벡터 사이즈.
	cout << cnt << '\n' << cnt2 << '\n';

}