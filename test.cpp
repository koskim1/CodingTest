#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> v = { {1,2,3} , {4,5,6} , {7,8,9} };
int b[3][3];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            b[j][i] = v[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << b[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}
/*
1 4 7
2 5 8
3 6 9
*/