#include <bits/stdc++.h>
using namespace std;

/*
N개의 숫자들 중 두 합이 M이 되는 갯수를 구하는 프로그램
고유 번호라하니 중복은 없을듯.

바로생각나야하는게 Combination 조합!! nCr
순서 상관없으니깐 조합!!

만약 순서 상관있는 문제라하면 Permutation,,, nPr

여기에서는 2개만 뽑으면 되니깐 nC2임

배열? 백터? 배열써볼까
*/

int n, m, cnt;
int a[15001];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	if (m > 200000) cout << 0 << "\n";
	else {
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				if (a[i] + a[j] == m) cnt++;
			}
		}
		cout << cnt << "\n";
	}

}