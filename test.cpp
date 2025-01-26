//#pragma warning(disable:4996)
#include <bits/stdc++.h>
using namespace std;
#define prev aaa
#define next aaaa
#define y1 aaaaa
const int INF = 987654321;
using ll = long long;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

/*
1.테이블 정의하기
D[i] = i를 1,2,3의 합으로 나타내는 방법의 수
2.점화식 세우기
D[i] = D[i-1] + D[i-2] + D[i-3]

3.초기값 설정하기
D[1] = 1, D[2] = 2, D[3] = 4

4.점화식을 이용해 문제 풀기
*/

int d[20];

int main() {
	fastIO();

	d[1] = 1;
	d[2] = 2;
	d[3] = 4;

	for (int i = 4; i < 11; i++) {
		d[i] = d[i - 1] + d[i - 2] + d[i - 3];
	}

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		cout << d[n] << '\n';
	}

}
