#pragma warning(disable:4996)
#include <bits/stdc++.h>
using namespace std;
#define prev aaa
#define next aaaa
#define y1 aaaaa
const int INF = 987654321;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}


int TC,k,k2;

int main() {
    fastIO();
    
    cin >> TC;

    while (TC--) {
        int res = 0;
        cin >> k >> k2;
        vector<int> n(k), m(k2);
        for (int i = 0; i < k; i++) {
            cin >> n[i];
        }
        for (int i = 0; i < k2; i++) {
            cin >> m[i];
        }

        sort(m.begin(), m.end());
       
        for (int i = 0; i < k; i++) {
            res += lower_bound(m.begin(), m.end(), n[i]) - m.begin();
        }

        cout << res << '\n';
    }
}
