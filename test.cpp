//#pragma warning(disable:4996)
#include <bits/stdc++.h>
using namespace std;
#define prev aaa
#define next aaaa
#define y1 aaaaa
const int INF = 987654321;
using ll = long long;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int n, m,result=INF;
int board1[10][10];
int board2[10][10];

vector<pair<int, int>> cctv;

const int dy[4] = { -1,0,1,0 };
const int dx[4] = { 0,1,0,-1 };

bool OOB(int a, int b) {
	return a < 0 || a >= n || b < 0 || b >= m;
}

void upd(int y, int x, int dir) {
	dir %= 4;
	while (true) {
		y += dy[dir];
		x += dx[dir];
		if (OOB(y, x) || board2[y][x] == 6) return;
		if (board2[y][x] != 0) continue;
		board2[y][x] = 7;
	}
}

void dfs(int idx) {
	if (idx == cctv.size()) { // 모든 CCTV를 처리한 경우
		int val = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (board2[i][j] == 0) val++; // 사각지대 카운트
			}
		}
		result = min(result, val); // 최솟값 갱신
		return;
	}

	int backup[10][10]; // 현재 상태 백업
	memcpy(backup, board2, sizeof(board2));

	int y = cctv[idx].first;
	int x = cctv[idx].second;
	int type = board1[y][x];

	for (int dir = 0; dir < 4; dir++) {
		memcpy(board2, backup, sizeof(backup)); // 복구
		if (type == 1) {
			upd(y, x, dir);
		}
		else if (type == 2) {
			upd(y, x, dir);
			upd(y, x, dir + 2);
		}
		else if (type == 3) {
			upd(y, x, dir);
			upd(y, x, dir + 1);
		}
		else if (type == 4) {
			upd(y, x, dir);
			upd(y, x, dir + 1);
			upd(y, x, dir + 2);
		}
		else if (type == 5) {
			upd(y, x, dir);
			upd(y, x, dir + 1);
			upd(y, x, dir + 2);
			upd(y, x, dir + 3);
		}
		dfs(idx + 1);
	}
}


int main() {
	fastIO();

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> board1[i][j];
			if (board1[i][j] != 0 && board1[i][j] != 6) {
				cctv.push_back({ i, j });
			}
		}
	}

	memcpy(board2, board1, sizeof(board1));
	dfs(0); // 백트래킹 시작
	cout << result << "\n";
}
