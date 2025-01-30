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
D[i][0] = i번째 집을 R로 칠할 때 최소비용
D[i][1] = i번째 집을 G로 칠할 때 최소비용
D[i][2] = i번째 집을 B로 칠할 때 최소비용

2.점화식 세우기
D[k][0] = min(D[k-1][1],D[k-1][2]) + R[k];
D[k][1] = min(D[k-1][0],D[k-1][2]) + G[k];
D[k][2] = min(D[k-1][0],D[k-1][1]) + B[k];

3.초기값 설정하기
D[1][0] = R[1];
D[1][1] = G[1];
D[1][2] = B[1];

4.점화식을 이용해 문제 풀기
*/

int d[1005][3];
int r[1005], g[1005], b[1005];

int main() {
	fastIO();

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) cin >> r[i] >> g[i] >> b[i];
	d[1][0] = r[1];
	d[1][1] = g[1];
	d[1][2] = b[1];

	for (int i = 2; i <= n; i++) {
		d[i][0] = min(d[i - 1][1], d[i - 1][2]) + r[i];
		d[i][1] = min(d[i - 1][0], d[i - 1][2]) + g[i];
		d[i][2] = min(d[i - 1][0], d[i - 1][1]) + b[i];
	}

	cout << min({ d[n][0],d[n][1],d[n][2] });
}
