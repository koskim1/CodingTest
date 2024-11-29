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
vector<int> num;
stack<int> stk;
int main() {
    fastIO();
    
    cin >> n;
    num.resize(n);

    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    vector<string> operation;
    int current = 1;

    for (int i = 0; i < n; i++) {
        int  target = num[i];

        while (current <= target) {
            stk.push(current);
            operation.push_back("+");
            current++;
        }

        if (!stk.empty() && stk.top() == target) {
            stk.pop();
            operation.push_back("-");
        }
        else {
            cout << "NO";
            return 0;
        }
    }

    for (const string &var : operation) {
        cout << var << '\n';
    }
}
