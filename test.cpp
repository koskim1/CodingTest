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

/*
입력값 :
1. 총 TC 개수
2. 체스판의 한 변의 길이(정사각형)
3. 현재 나이트가 있는 칸
4. 나이트가 이동하려는 칸
5. 각 TC마다 최소 몇번만에 이동할 수 있는가 출력
*/

const int MAX = 304;
const int dy[8] = { -1,-2,-2,-1,1,2,1,2 };
const int dx[8] = { -2,-1,1,2,2,1,-2,-1 };

int TC, n;
bool visited[MAX][MAX];

int bfs(int startY, int startX, int targetY, int targetX) {
	queue<pair<int, int>> q;
	queue<int> dist; //이동횟수 저장
	visited[startY][startX] = true;
	q.push({ startY,startX });
	dist.push(0);

	while (!q.empty()) {
		// 변수 저장
		int y = q.front().first;
		int x = q.front().second;
		int steps = dist.front();
		q.pop();
		dist.pop();

		// 기저사례
		if (y == targetY && x == targetX) {
			return steps;
		}

		// bfs
		for (int i = 0; i < 8; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];

			if (nx >= 0 && nx < n && ny >= 0 && ny < n && !visited[ny][nx]) {
				q.push({ ny,nx });
				dist.push(steps + 1);
				visited[ny][nx] = true;
			}
		}
	}
	// 안되면
	return -1;
}

int main() {
	fastIO();

	cin >> TC;
	while (TC--) {
		cin >> n;
		int startY, startX, targetY, targetX;
		cin >> startY >> startX >> targetY >> targetX;

		// TC돌리니 매 TC마다 초기화 시켜주고 bfs돌리기
		memset(visited, false, sizeof(visited));

		cout << bfs(startY, startX, targetY, targetX) << "\n";
	}
}
