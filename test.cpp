#include <bits/stdc++.h>
using namespace std;


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // 초항 a, 배수 r, 갯수 n
    int a = 1, r = 2, n = 4;

    vector<int> v;
    cout << a * ((int)pow(r, n) - 1) / (r - 1) << "\n";
    /*
    pow(r, n)은 r의 n승을 뜻함
    기본적으로 암묵적 형변환에 의해 float형식으로 들어가지만
    그래서 int형식으로 형변환을 시켜줘야함.
    */
    for (int i = 0; i < n; i++) {
        v.push_back(a);
        a *= r;
    }
    for (int i : v) cout << i << ' ';
}
/*
15
1 2 4 8
*/