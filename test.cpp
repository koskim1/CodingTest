﻿#include <bits/stdc++.h>
using namespace std;

int n, m, j, l, r, temp, ret;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m >> j;
	l = 1;
	for (int i = 0; i < j; i++) {
		r = l + m - 1;
		cin >> temp;
		// 사과떨어지는게 바구니 범위 내면 continue
		if (temp >= l && temp <= r)continue;
		else {
			if (temp < l) {
				ret += (l - temp);
				l = temp;
			}
			else {
				l += (temp - r);
				ret += (temp - r);
			}
		}
	}
	cout << ret << "\n";
}