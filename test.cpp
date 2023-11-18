#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n = 100;
    int b = 2;
    while (n > 1) {
        v.push_back(n % b);
        n /= b;
    }// 0 0 1 0 0 1 1

    if (n == 1)v.push_back(1);
    reverse(v.begin(), v.end());
    // 1 1 0 0 1 0 0 
    for (int a : v) {
        // if (a>=10) 이 조건은 16진법 변환을 위해 필요함
        // ( 16진법 : 0 ~ F로 표현하는 방법 )
        if (a >= 10) cout << char(a + 55);
        else cout << a;
    }
    return 0;
}
/*
여기서 b를 3으로 바꾸면 10진법을 3진법으로 바꾸는 방법이 됩니다. 
진법들을 테스팅해가면서 익히면 됩니다.
*/