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


int main() {
    fastIO();

    string s;
    int len = 0;
    cin >> s;
    stack<char> stk;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            stk.push('(');
        }
        else {
            stk.pop();
            // 레이저일 경우            
            if (s[i-1] == '(') {
                len += stk.size();
            }
            // 막대기의 끝일 경우
            else
                len += 1;
            
        }
    }

    cout << len;
}
