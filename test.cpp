#include <bits/stdc++.h>
using namespace std;

string s;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	getline(cin, s);
	for (int i = 0; i < s.size(); i++) {
		// 대문자인 경우
		if (s[i] >= 65 && s[i] < 97) {
			if (s[i] + 13 > 90) s[i] = s[i] + 13 - 26;
			else s[i] = s[i] + 13;
		}
		else if (s[i] >= 97 && s[i] <= 122) {
			if (s[i] + 13 > 122)s[i] = s[i] + 13 - 26;
			else s[i] = s[i] + 13;
		}
	}
	for (int i = 0; i < s.size(); i++) {
		cout << s[i];
	}

	/*
	* // 예외사항을 생각안하고있었음
	* 카운팅을 하는것이 아닌 그냥 바로 고쳤으면 됐음
	* 아스키 코드 잘 생각할것 A = 65 a = 97 알파벳은 26개임
	*
	*
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 97) {
			cnt[i - 'a' + 13];
		}
		else if (s[i] < 97) {
			cnt[i + 'A' + 13];
		}
	}
	for (int i = 0; i < s.size(); i++) {
		cout << cnt[i];
	}
	cout << "\n";

	*/
}