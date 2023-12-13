#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll a, b, c;

ll go(ll a, ll b) {
	if (b == 1)return a % c;

	ll ret = go(a, b / 2);

	ret = (ret * ret) % c;

	//만약 홀수일 경우 한번더 더해줘야함
	// 2의 5승일 경우 2^2 X 2^2 X 2^1 <- 이넘처럼
	if (b % 2) ret = (ret * a) % c;
	return ret;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> a >> b >> c;
	cout << go(a, b) << "\n";

}