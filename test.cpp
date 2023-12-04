#include <bits/stdc++.h>
using namespace std;

int A, B, C;
int a, b;
int cnt[104], ret;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> A >> B >> C;
	for (int i = 0; i < 3; i++) {
		cin >> a >> b;
		for (int j = a; j < b; j++) cnt[j]++;
	}

	for (int j = 1; j < 100; j++) {
		if (cnt[j]) {
			if (cnt[j] == 1) ret += A;
			else if (cnt[j] == 2) ret += B * 2;
			else if (cnt[j] == 3) ret += C * 3;
		}
	}
	cout << ret << "\n";

}
/*
입력
5 3 1
1 6
3 5
2 8

출력
33
*/