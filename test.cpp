#include <bits/stdc++.h>
using namespace std;

int a[3][3] = { {1,2,3}, {1,2,3}, {1,2,3} };

void go(int a[][3]) {
    a[2][2] = 100;
}

void go2(int a[3][3]) {
    a[2][2] = 1000;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cout << a[2][2] << "\n";
    go(a); cout << a[2][2] << "\n";
    go2(a); cout << a[2][2] << "\n";

    // 2차원 배열 출력
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}
/*
3
100
1000
1 2 3
1 2 3
1 2 1000
*/