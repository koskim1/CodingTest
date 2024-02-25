#include <bits/stdc++.h>
using namespace std;

// 2 - B 유기농지렁이
// ConnectedComponent 찾는 문제.
// BFS, DFS 둘다 가능. DFS가 코드수가 줄어들어 구현하기 쉬움
// 최단거리를 찾는게 아니니깐 이게 굳.

int dy[4] = { -1, 0 , 1, 0 };
int dx[4] = { 0, 1 , 0, -1 };

int t, m, n, k, x, y, nx, ny, a[54][54], ret;

bool  visited[54][54];

void dfs(int y, int x) {
	visited[y][x] = 1;
	for (int i = 0; i < 4; i++) {
		ny = y + dy[i];
		nx = x + dx[i];
		if (ny < 0 || nx < 0 || ny >= n || nx >= m)continue;
		if (a[ny][nx] == 1 && !visited[ny][nx]) {
			dfs(ny, nx);
		}
	}
	return;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> t;

	while (t--) {
		// 테스트케이스 문제는 초기화가 굉장히 중요함.
		fill(&a[0][0], &a[0][0] + 54 * 54, 0);
		fill(&visited[0][0], &visited[0][0] + 54 * 54, 0);
		ret = 0;
		// 위처럼 fill로 초기화를 안해주면 A테스트케이스가 끝나도
		// B의 테스트케이스에 A값들이 남아있기 때문!! 중요함!

		// 초기화는 fill 또는 memset 함수를 써줘야한다.
		/*
		또 하다가 알았는데 fill을 쓸때는 선언한 배열의 크기랑 맞춰서 무조건
		2nd value에 배열크기만큼 곱해줘서 더해줘야한다. 안그러면 그 값보다
		적은 값에만 채우고 다음 열로 넘어가기 때문.
		*/

		cin >> m >> n >> k;
		for (int i = 0; i < k; i++) {
			cin >> x >> y;
			a[y][x] = 1;
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (a[i][j] == 1 && !visited[i][j]) {
					dfs(i, j);
					ret++;
				}
			}
		}
		cout << ret << "\n";
	}
}