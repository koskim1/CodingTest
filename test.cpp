#include <bits/stdc++.h>
using namespace std;

stack<string> stk;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    stk.push("��");
    stk.push("��");
    stk.push("��");
    stk.push("ȭ");
    stk.push("��");
    stk.push("��");
    
    while (stk.size()) {
        cout << stk.top() << "\n";
        stk.pop();
    }

}
/*
��
��
ȭ
��
��
��
*/
