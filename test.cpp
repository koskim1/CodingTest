﻿#include <bits/stdc++.h>
using namespace std;

int n, cnt[26];
string s, ret;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	//첫번째 인덱스의 알파벳, 즉 성이 같은 알파벳 5개이상 찾아내야함
	// 카운팅배열이 생각나야함
	for (int i = 0; i < n; i++) {
		cin >> s;

		// 어떻게 첫번째 인덱스만 빼올것인지?
		cnt[s[0] - 'a']++;
	}
	// 5개 이상인것들을 어디서 보관해서 확인할것인지?
	for (int i = 0; i < 26; i++) if (cnt[i] >= 5) ret += (i + 'a');
	// 5개이상 찾아낸것들 사전적으로 순차적출력
	if (ret.size()) cout << ret << "\n";
	// 없으면 PREDAJA 출력
	else cout << "PREDAJA" << "\n";
}