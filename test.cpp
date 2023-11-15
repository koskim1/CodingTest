#include <bits/stdc++.h>
using namespace std;

const int max_n = 40;
bool che[max_n + 1];
// 예를 들어 40을 넣었을 때 che[40]이 참조가 되므로 max_n + 1을 넣어야 함.
// max_n까지의 소수를 만드는 함수.

vector<int> era(int mx_n) {
    vector<int> v;
    for (int i = 2; i <= mx_n; i++) {
        if (che[i]) continue;
        for (int j = 2 * i; j <= mx_n; j += i) {
            che[j] = 1;
        }
    }
    for (int i = 2; i <= mx_n; i++) if (che[i] == 0) v.push_back(i);
    return v;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> a = era(max_n);
    for (int i : a)cout << i << " ";
}
/*
2 3 5 7 11 13 17 19 23 29 31 37
*/