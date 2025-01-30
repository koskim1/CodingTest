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
dp[i] = 2×i 크기의 직사각형을 채우는 방법의 수

2.점화식 세우기
피보나치 수열?
f(n) = f(n-1) + f(n-2)

점화식: dp[i] = dp[i-1] + dp[i-2]

3.초기값 설정하기
f(1) = 1
f(2) = 2

dp[1] = 1
dp[2] = 2

4.점화식을 이용해 문제 풀기
*/

int dp[10005];
int mod = 10007;

int main() {
	fastIO();

	int n;
	cin >> n;
	dp[1] = 1;
	dp[2] = 2;
	for (int i = 3; i <= n; i++) dp[i] = (dp[i - 1] + dp[i - 2]) % mod;
	cout << dp[n];

}
