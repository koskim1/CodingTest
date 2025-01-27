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

/*
1.테이블 정의하기
D[i][j] = 현재까지 j개의 계단을 연속해서 밟고 i번째 계단까지 올라섰을 때
점수 합의 최댓값, 단 i번째 계단은 꼭 밟아야 한다.

2.점화식 세우기
D[k][1] = max(D[k-2][1], D[k-2][2]) + S[k]
D[k][2] = D[k-1][1] + S[k]

3.초기값 설정하기
D[1][1] = S[1];
D[1][2] = 0;
D[2][1] = S[2];
D[2][2] = S[1] + S[2];

4.점화식을 이용해 문제 풀기
*/

int s[305];
int n;
int d[305][3];

int main() {
	fastIO();

	cin >> n;
	for (int i = 1; i <= n; i++) cin >> s[i];
	if (n == 1) {
		cout << s[1];
		return 0;
	}
	d[1][1] = s[1];
	d[1][2] = 0;
	d[2][1] = s[2];
	d[2][2] = s[1] + s[2];

	for (int i = 3; i <= n; i++) {
		d[i][1] = max(d[i - 2][1], d[i - 2][2]) + s[i];
		d[i][2] = d[i - 1][1] + s[i];
	}

	cout << max(d[n][1], d[n][2]);
}
