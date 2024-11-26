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

/*
연결리스트 
*/
int n, k;
queue<int> q;

int main() {
    fastIO();
  
    cin >> n >> k;        
    for (int i = 1; i <= n; i++) {
        q.push(i);
    }
    cout << '<';
    while (!q.empty()) {
        for (int i = 0; i < k - 1; i++) {
            q.push(q.front());
            q.pop();
        }
        cout << q.front();
        q.pop();
        if (!q.empty()) cout << ", ";
    }
    cout << '>';
}
