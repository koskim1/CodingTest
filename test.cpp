﻿#include <bits/stdc++.h>
using namespace std;

string s;
int lcnt, vcnt;

bool isVowel(int idx) {
	return (idx == 'a' || idx == 'e' || idx == 'i' || idx == 'o' || idx == 'u');
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	while (true) {
		cin >> s;
		if (s == "end")break;

		// 초기화
		lcnt = vcnt = 0;
		bool flag = 0;
		bool is_include_v = 0;
		int prev = -1;

		for (int i = 0; i < s.size(); i++) {
			int idx = s[i];
			// lcnt는 모음인것들 ++, vcnt에는 자음
			// 그런데 연속되는지 체크하기 위해 계속 lcnt랑 vcnt를 0으로 초기화
			if (isVowel(idx))lcnt++, vcnt = 0, is_include_v = 1;
			else vcnt++, lcnt = 0;

			// 3연속나오면 불가능하니 flag 1로
			if (vcnt == 3 || lcnt == 3) flag = 1;

			// i>=1로 한 이유는 prev랑 현재랑 비교해주기 위해 연속되는건
			// 모음 중 'e'와 'o'만 2연속이 가능하다.
			if (i >= 1 && (prev == idx) && (idx != 'e' && idx != 'o')) {
				flag = 1;
			}
			prev = idx;
		}

		// 모음이 없었으면 flag 1로
		if (is_include_v == 0) flag = 1;
		if (flag) cout << "<" << s << ">" << " is not acceptable.\n";
		else cout << "<" << s << ">" << " is acceptable.\n";
	}
}