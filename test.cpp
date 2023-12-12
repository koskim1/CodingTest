#include <bits/stdc++.h>
using namespace std;

string s, ret;
int cnt[200], flag;
char mid;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> s;
	for (char a : s) cnt[a]++;
	for (int i = 'Z'; i >= 'A'; i--) {
		if (cnt[i]) {
			// 원래 홀수체크는 ( % 2 == 1)해서 하는데
			// & 1 로도 가능 2진수 마지막이 1이면 무조건 홀수이기 때문
			if (cnt[i] & 1) {
				mid = char(i); flag++;
				cnt[i]--;
			}
			// 홀수가 2개이상이면 break해서 Sorry출력
			if (flag == 2) break;
			// 양사이드에 짝수인 알파벳 넣기
			for (int j = 0; j < cnt[i]; j += 2) {
				ret = char(i) + ret;
				//여기서 ret += char(i)를 한 이유가
				// ret = ret + char(i) 로해서 ret의 뒤쪽에 char(i)를 놓기위해임
				ret += char(i);
			}
		}
	}

	// 예시로 "ABBA"가 됐고 mid에 Z가 있다면
	// 중앙에 이제 'Z'를 insert해주기위해 중앙에 넣어주는 것
	if (mid)ret.insert(ret.begin() + ret.size() / 2, mid);
	if (flag == 2) cout << "I'm Sorry Hansoo\n";
	else cout << ret << "\n";

}