#include <bits/stdc++.h>
using namespace std;

const int n = 4;

void rotate_right_90(vector<vector<int>>& key) {
    vector<vector<int>> temp(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            temp[i][j] = key[n - j - 1][i];
            // µð¹ö±×
            cout << temp[i][j] << '\n';
        }
    }
    key = temp;
    return;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<vector<int>> a = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16},
    };
    rotate_right_90(a);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}
/*
13 9 5 1
14 10 6 2
15 11 7 3
16 12 8 4
*/