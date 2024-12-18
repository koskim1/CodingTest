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

void func(int a, int b, int n) {
	if (n == 1) {
		cout << a << ' ' << b << "\n";
		return;
	}

	func(a, 6 - a - b, n - 1);
	cout << a << ' ' << b << "\n";
	func(6 - a - b, b, n - 1);
}


int main() {
	fastIO();

	int k;
	cin >> k;
	cout << (1 << k) - 1 << "\n";
	func(1, 3, k);
}
