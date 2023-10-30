#include <bits/stdc++.h>
using namespace std;

stack<string> stk;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    stk.push("엄");
    stk.push("준");
    stk.push("식");
    stk.push("화");
    stk.push("이");
    stk.push("팅");
    
    while (stk.size()) {
        cout << stk.top() << "\n";
        stk.pop();
    }

}
/*
팅
이
화
식
준
엄
*/
