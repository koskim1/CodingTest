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

2.점화식 세우기

3.초기값 설정하기

4.점화식을 이용해 문제 풀기
*/

int n;

int main() {
	fastIO();

	cin >> n;
	vector<vector<int>> costs(n, vector<int>(3));

	for (int i = 0; i < n; ++i) {
		cin >> costs[i][0] >> costs[i][1] >> costs[i][2];
	}

	vector<vector<int>> dp(n, vector<int>(3));
	dp[0][0] = costs[0][0];
	dp[0][1] = costs[0][1];
	dp[0][2] = costs[0][2];

	for (int i = 1; i < n; ++i) {
		dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + costs[i][0];	// R로 칠하는경우
		dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + costs[i][1];	// G로 칠하는경우
		dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + costs[i][2];	// B로 칠하는경우
	}

	int result = min({ dp[n - 1][0], dp[n - 1][1], dp[n - 1][2] });
	cout << result << '\n';
}
