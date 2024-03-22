﻿#include <bits/stdc++.h>
using namespace std;

int n, m, r, a, b, cnt = 1;
int visited[100004];
int result[100004];

vector<int> v[100004];
queue<int> q;

void bfs(int here) {

	visited[here] = 1;
	q.push(here);

	while (!q.empty()) {
		int here = q.front();
		//cout << here << "\n";
		q.pop();

		result[here] = cnt;
		cnt++;

		for (int there : v[here]) {
			if (visited[there]) continue;
			visited[there] = visited[here] + 1;
			q.push(there);
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m >> r;
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}

	for (int i = 1; i <= n; i++) {
		sort(v[i].begin(), v[i].end());
	}
	bfs(r);

	for (int i = 1; i <= n; i++) cout << result[i] << "\n";
}