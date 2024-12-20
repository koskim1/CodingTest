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

int n, white, blue;
int board[130][130];


bool isUniform(int y, int x, int size) {
	int color = board[y][x];
	for (int i = y; i < y + size; i++) {
		for (int j = x; j < x + size; j++) {
			if (board[i][j] != color) return false;
		}
	}
	return true;
}

// 함수 정의
void func(int y, int x, int size){
	// base condition
	// 탐색중인 영역이 모두 같은색인가?
	if (isUniform(y, x, size)) {
		if (board[y][x] == 0) white++;
		else blue++;
		return;
	}

	int half = size / 2;
	// 재귀식
	func(y, x, half);
	func(y, x + half, half);
	func(y + half, x, half);
	func(y + half, x + half, half);
}

int main() {
	fastIO();

	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> board[i][j];
		}
	}
	
	func(0,0,n);
	cout << white << "\n" << blue << "\n";
}
