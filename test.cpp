#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;


int main() {
	//ios::sync_with_stdio(0);
	//cin.tie(0);

	while (scanf("%d", &n) != EOF) {
		ll cnt = 1, ret = 1;
		while (true) {
			if (cnt % n == 0) {
				printf("%lld\n", ret);
				break;
			}
			else {
				cnt = (cnt * 10) % n + 1 % n;
				ret++;
			}
		}
	}
	return 0;
}