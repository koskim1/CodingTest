﻿#pragma warning(disable:4996)
#include <bits/stdc++.h>
using namespace std;
#define prev aaa
#define next aaaa
#define y1 aaaaa


void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}


int a[104][104];
int cnt, n, x, y;
int main() {
    fastIO();

    cin >> n;
    while (n--) {
        cin >> x >> y;
        for (int i = y; i < y + 10; i++) {
            for (int j = x; j < x + 10; j++) {
                if (!a[i][j]) {
                    cnt++;
                    a[i][j] = 1;
                }
            }
        }
    }
    cout << cnt << '\n';
}