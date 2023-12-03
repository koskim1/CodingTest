#include <bits/stdc++.h>
using namespace std;


/*
	재귀함수의 시간복잡도는 재귀함수의 메인로직에 있다.

	MainLogic * 함수호출,,
	메인로직에 대한 함수호출이 몇번 호출되냐에 따라 시간복잡도가 정해짐
*/

int N, cnt;

void solve(int N) {
	cnt++;
	cout << cnt << '\n';
	if (N == 0) return;
	for (int i = 0; i < 3; i++) {
		solve(N - 1);
	}
	return;
}


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

	cin >> N;
	solve(N);

	// 등비수열 문제이니
	// a(r의n승 -1) / (r - 1)

	// 이 문제의 메인로직은 O(1)을 가지고 있고
	// 함수는 등비수열 만큼 즉 2분의 1의 ( 3의 n승 - 1인데)
	// 상수 다 띄고나면 3의 n승이고
	// 메인로직 X 함수는 => O(1) * O(3^n)이니 
	// 이 식의 시간복잡도는 O(3^n)이다.
}
