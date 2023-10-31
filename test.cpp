#include <bits/stdc++.h>
using namespace std;

queue<int> q;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 1; i <= 10; i++) q.push(i);
    while (q.size()) {
        cout << q.front() << ' ';
        q.pop();
    }
    cout << '\n';
}
