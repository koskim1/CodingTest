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

int n, num;

int main() {
    fastIO();
    
    stack<pair<int, int>> stk; // { 탑의 높이, 탑의 인덱스 }

    cin >> n;
    vector<int> v(n, 0);//사이즈 n만큼 0으로 채워둬. 이따가 안부딪히는거(앞쪽)는 0으로 하면 되고 나머진 덮으면 되니껜

    for (int i = 0; i < n; i++) {
        cin >> num;

        while (!stk.empty() && stk.top().first <= num) {
            stk.pop();
        }

        if (!stk.empty()) {
            v[i] = stk.top().second + 1; // 몇번째에 있었는지
        }

        stk.push({ num, i });
    }

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

}
