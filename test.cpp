﻿#include <bits/stdc++.h>
using namespace std;

int n;
string s, ret;
vector<string> v;

void go() {
	while (true) {
		if (ret.size() && ret.front() == '0')ret.erase(ret.begin());
		else break;
	}

	// 0000 으로 입력값이 들어오는 예외처리. 0만 출력해야하니 다 안지우고..
	if (ret.size() == 0) ret = "0";
	v.push_back(ret);
	ret = "";
}

bool cmp(string a, string b) {
	// 여기가 2순위. 사이즈가 같으면 맨 앞부터 비교
	if (a.size() == b.size()) return a < b;

	//커스텀 오퍼레이터는 여기가 1순위로 check ( 2자리수인지 3자리수인지 사이즈 체크 )
	return a.size() < b.size();
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		ret = "";
		for (int j = 0; j < s.size(); j++) {
			if (s[j] < 65) ret += s[j];
			else if (ret.size()) go();
		}
		if (ret.size()) go();
	}

	sort(v.begin(), v.end(), cmp);

	for (string i : v) {
		cout << i << "\n";
	}
}