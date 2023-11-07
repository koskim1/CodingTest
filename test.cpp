#include <bits/stdc++.h>
using namespace std;

int a[3] = { 1,2,3 };
void go(int a[]) {
    a[2] = 100;
}

void go2(int a[3]) {
    a[2] = 1000;
}

void go3(int* a) {
    a[2] = 10000;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    go(a); cout << a[2] << '\n';
    go2(a); cout << a[2] << '\n';
    go3(a); cout << a[2] << '\n';
    for (auto v : a) {
        cout << v << " ";
    }
    cout << "\n";
}
/*
100
1000
10000
1 2 10000
*/