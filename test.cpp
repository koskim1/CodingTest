﻿#pragma warning(disable:4996)
#include <bits/stdc++.h>
using namespace std;
#define prev aaa
#define next aaaa
#define y1 aaaaa
const int INF = 987654321;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int t, r;
string s;

void repeat(int j) {
    for (int i = 0; i < r; i++) {
        cout << s[j];
    }
}

int main() {
    fastIO();

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> r;
        cin >> s;
        for (int j = 0; j < s.length(); j++) {
            repeat(j);
        }
        cout << "\n";
    }
}
