#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	while (true) {
		string s;
		getline(cin, s);
		if (s == ".") break;
		// 매번 TC를 새로하니 스택도 새로 정의.
		stack <int> stk;
		bool check = true;

		for (int i = 0; i < s.length(); i++) {
			if (s[i] == ')') {
				// stk의 top을 참조할때는 무조건 size를 체크해야함
				// 아무것도없는데 top을 참조하려고하면
				// reference error 가 뜨기때문!!!!
				if (stk.size() == 0 || stk.top() == '[') {
					check = false;
					break;
				}
				else { stk.pop(); }
			}
			else if (s[i] == ']') {
				if (stk.size() == 0 || stk.top() == '(') {
					check = false;
					break;
				}
				else { stk.pop(); }
			}
			if (s[i] == '(') stk.push(s[i]);
			if (s[i] == '[') stk.push(s[i]);

		}
		if (check && stk.size() == 0) cout << "yes\n";
		else cout << "no\n";
	}

}