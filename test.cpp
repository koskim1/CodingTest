#include <bits/stdc++.h>
using namespace std;

int add(int a, int b) {
    a += 10;
    cout << a << "\n";
    return a + b;
}

vector<int> v(3, 0);
void go(vector<int> v) {
    v[1] = 100;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a = 1;
    int b = 2;
    int sum = add(a, b);
    cout << a << '\n';


    // vector를 값에 의한 호출을 하면 수정해도 아무런 반영 되지 않음. 위와 마찬가지.
    go(v);
    for (int i : v) cout << i << "\n";
}