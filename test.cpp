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

int n, m, x, res;
deque<int> dq;
int main() {
    fastIO();

    int idx; // 삭제할 원소가 있는 인덱스

    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        dq.push_back(i);
    }

    while (m--) {
        cin >> x;

        auto it = find(dq.begin(), dq.end(), x);
        idx = distance(dq.begin(), it);

        if (idx <= dq.size() / 2) {
            while (1) {
                if (dq.front() == x) {
                    dq.pop_front();
                    break;
                }
                res++;
                dq.push_back(dq.front());
                dq.pop_front();
            }
        }
        else {
            while (1) {
                if (dq.front() == x) {
                    dq.pop_front();
                    break;
                }
                res++;
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
    }
    cout << res;
}
