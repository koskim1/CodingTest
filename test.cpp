#include <bits/stdc++.h>
using namespace std;

int n = 5, k = 3, a[5] = { 1,2,3,4,5 };

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                cout << i << " " << j << " " << k << '\n';
            }
        }
    }

}
/*
0 1 2
0 1 3
0 1 4
0 2 3
0 2 4
0 3 4
1 2 3
1 2 4
1 3 4
2 3 4
*/