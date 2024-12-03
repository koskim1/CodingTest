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

int n;
queue<int> q;
int main() {
    fastIO();

    cin >> n;

    for (int i = 1; i <= n; i++) {
        q.push(i);
    }

    while (n != 1) {
        q.pop();
        if (q.size() == 1) break;
        // 맨 위에있는 카드 맨 밑으로
        int temp = q.front();
        q.pop();
        q.push(temp);
    }
    cout << q.front();
}
