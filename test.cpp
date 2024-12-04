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
deque<int> dq;
int main() {
    fastIO();

    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        int num;
        cin >> s;
        if (s == "push_front") {
            cin >> num;
            dq.push_front(num);
        }
        else if (s == "push_back") {
            cin >> num;
            dq.push_back(num);
        }
        else if (s == "pop_front" && !dq.empty()) {
            cout << dq.front() << "\n";
            dq.pop_front();
        }
        else if (s == "pop_back" && !dq.empty()) {
            cout << dq.back() << "\n";
            dq.pop_back();
        }
        else if (s == "size") cout << dq.size() << "\n";
        else if (s == "empty") {
            if (dq.empty()) cout << "1" << "\n";
            else cout << "0" << "\n";
        }
        else if (s == "front" && !dq.empty()) {
            cout << dq.front() << "\n";
        }
        else if (s == "back" && !dq.empty()) {
            cout << dq.back() << "\n";
        }
        else cout << "-1" << "\n";   
    }
}
