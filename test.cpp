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
문제
수 N개가 주어졌을 때, i번째 수부터 j번째 수까지 합을 구하는 프로그램을 작성하시오.

1.테이블 정의하기
dp[i] = i번째 수까지의 합

2.점화식 세우기

점화식: dp[i] = dp[i-1] + arr[i];

3.초기값 설정하기
dp[i] = dp[i-1] + arr[i]; (i=1)

4.점화식을 이용해 문제 풀기
*/

int n, m, total;
int arr[100004];
int dp[100004];

int main() {
	fastIO();

	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
		dp[i] = dp[i-1] + arr[i];		
	}

	while (m--) {
		int a, b;
		cin >> a >> b;
		cout << dp[b] - dp[a - 1] << "\n";
	}
}
