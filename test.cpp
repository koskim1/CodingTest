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
()는 2
[]는 3

(x) 는 2x(x)값 => (()) => 2 * 2  = 4 ((())) => 2*2*2 = 8
연속적이냐에 따라
(는 a 초기값 1로. 연속적이면 ++해주고 아니면 다시 1로 초기화.
[는 b해서 
*/
string s;
stack<char> stk;

int main() {
    fastIO();

    int sum = 0; // 누적해서 더해질 값
    int num = 1; // 곱해질 값

    cin >> s;

    for (int i = 0; i < s.length(); i++) {

        if (s[i] == '(') {
            num *= 2;
            stk.push(s[i]);
        }
        else if (s[i] == '[') {
            num *= 3;
            stk.push(s[i]);
        }
        else if (s[i] == ')') {
            if (stk.empty() || stk.top() != '(') {
                cout << 0;
                return 0;
            }
            if (s[i - 1] == '(') sum += num;
            stk.pop();
            num /= 2; // 소괄호 쌍이 사라졌으니 2로나눔
        }
        else {
            if (stk.empty() || stk.top() != '[') {
                cout << 0;
                return 0;
            }
            if (s[i - 1] == '[') sum += num;
            stk.pop();
            num /= 3;
        }
    }  
    
    if (stk.empty()) cout << sum;
    else cout << 0;

}
