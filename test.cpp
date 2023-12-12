#include <bits/stdc++.h>
using namespace std;

int n, ret;
string s;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		// 매번 빈스택이 필요하니 for문 안에 호출
		stack<char> stk;
		for (char a : s) {
			// stk.size()를 해주는 이유는 스택에 값이 있는지 체크하기위해
			// q.front()할때도 마찬가지 무조건 값이 있는지 체크해야함
			// 그래야 참조에러가 발생안함
			if (stk.size() && stk.top() == a) stk.pop();
			else stk.push(a);
		}
		if (stk.size() == 0) ret++;
	}
	cout << ret << "\n";

}