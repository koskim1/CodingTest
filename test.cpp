#include <bits/stdc++.h>
using namespace std;

int t, n;
string a, b;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> t;
	while (t--) {
		map<string, int> _map;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> a >> b;
			_map[b]++;
		}
		// 경우의 수면 long long을 박고 시작하는게 좋음
		long long ret = 1;
		for (auto c : _map) {
			// 경우의수 a*b
			// 종류중에 안입는종류도 있으니 + 1
			ret *= ((long long)c.second + 1);
		}
		// 아무것도 안입는경우는 안된다하니 빼주고
		ret--;
		cout << ret << "\n";
	}
}