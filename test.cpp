#include <bits/stdc++.h>
using namespace std;

char a[54][54];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}
/*
LLMM
MMLL
L L M M
M M L L
*/