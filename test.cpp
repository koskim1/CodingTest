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
//const int dx[4] = { 0,1,0,-1 };

#define MAX 1000004

int f, s, g, u, d;
int dx[2];
int visited[MAX];
bool flag = true;

void bfs() {
	queue<int> q;
	q.push(s);
	visited[s] = 1;

	while (!q.empty()) {
		s = q.front(); q.pop();

		for (int i = 0; i < 2; i++) {
			int nx = s + dx[i];

			if (nx > 0 && nx <= f) {
				if (visited[nx] == 0) {
					visited[nx] = visited[s] + 1;
					q.push(nx);
				}
			}

			if (s == g) {
				flag = false;
				break;
			}
		}
	}
}

int main() {
	fastIO();

	cin >> f >> s >> g >> u >> d;
	dx[0] = u;
	dx[1] = -d;

	bfs();

	if (flag) cout << "use the stairs";
	else cout << visited[g] - 1;

}
