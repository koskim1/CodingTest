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

int n, cnt;

bool isUsed1[40];
bool isUsed2[40];
bool isUsed3[40];

void func(int cur) {
	if (cur == n) {
		cnt++;
		return;
	}

	for (int i = 0; i < n; i++) {
		if (isUsed1[i] || isUsed2[i + cur] || isUsed3[cur - i + n - 1]) continue;

		isUsed1[i] = true; //세로
		isUsed2[i + cur] = true; //대각 왼아래에서 오른위로 올라가는 대각선
		isUsed3[cur - i + n - 1] = true; // 대각 왼위에서 오른아래로 내려가는 대각선
		func(cur + 1);
		isUsed1[i] = false;
		isUsed2[i + cur] = false;
		isUsed3[cur - i + n - 1] = false;
	}
}

int main() {
	fastIO();

	cin >> n;
	func(0);

	cout << cnt;


}
