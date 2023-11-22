#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);



/*
queue나 stack에서 top이나 pop 연산을 할 때 항상 size를 체크해야 합니다.
아래 코드처럼 구축해야 합니다.

만약 해당 자료구조에 아무것도 없는데 해당 자료구조 내의 요소를 참조하려고 할 경우
참조에러(reference Error)가 발생할 수 있습니다.
*/
    if (q.size() && q.top == value)
}
