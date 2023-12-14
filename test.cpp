#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;


int main() {
	//ios::sync_with_stdio(0);
	//cin.tie(0);

	// while(cin >> n)으로 해도 됨 / 입력값 계속 받을땐 EOF사용
	while (scanf("%d", &n) != EOF) {
		ll cnt = 1, ret = 1;
		while (true) {
			if (cnt % n == 0) {
				printf("%lld\n", ret);
				break;
			}
			else {
				// 1이 아니라면 11로,, 11아니며 111로,,, ( 모듈러 연산 해주면서 )
				cnt = (cnt * 10) % n + 1 % n;
				// 1이 몇개인지 카운트 ( 가장 작은 자리수 )
				ret++;
			}
		}
	}
	return 0;
}