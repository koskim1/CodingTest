//정답코드
#include <bits/stdc++.h>
using namespace std;

int n;
string s, ori_s, pre, suf;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	cin >> ori_s;
	int pos = ori_s.find('*');
	pre = ori_s.substr(0, pos);
	suf = ori_s.substr(pos + 1);

	for (int i = 0; i < n; i++) {
		cin >> s;
		if (pre.size() + suf.size() > s.size()) {
			cout << "NE\n";
		}
		else {
			if (pre == s.substr(0, pre.size()) && suf == s.substr(s.size() - suf.size()))
				cout << "DA\n";
			else
				cout << "NE\n";
		}
	}#include <bits/stdc++.h>
		using namespace std;
	/*
	* 1 - H 2559 수열
	N = 1 ~ 10만        // 온도를 측정한 전체 날짜의 수
	K = 1 ~ 10만 -1           // 합을 구하기 위한 연속적인 날짜의 수
	온도는 -100 ~ 100
	온도의 합이 "최대" 되는 값 : 구간합 prefix sum, psum[i]	 = psum[i-1] + a[i];
	이 문제의 최솟값은?
	최대값은 어디서부터?

	최대값을 구하라가 나오면
	최솟값부터 >>>> 최대값을 구하는거임

	최소값을 구하라면 최대값 >>>> 최소값을 구하는거

	ret = max(ret,value);처럼
	ret을 기반으로 해서 최종적인 최대값을 만들어서 문제에 반환해야함
	최소값은 min(ret, value);
	*/

	typedef long long ll;
	int n, k, temp, psum[100001], ret = -10000004;

	int main() {
		ios::sync_with_stdio(0);
		cin.tie(0);

		cin >> n >> k;
		for (int i = 1; i <= n; i++) {
			cin >> temp; psum[i] = psum[i - 1] + temp;
		}
		for (int i = k; i <= n; i++) {
			ret = max(ret, psum[i] - psum[i - k]);
		}
		cout << ret << "\n";

	}

}