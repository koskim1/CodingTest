#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    /*

어떠한 변수를 초기값을 잘못 설정해서 맞왜틀에 걸리는 경우가 있습니다.

초기값은 답의 범위 밖에서 잡으면 됩니다.


문제의 “답”의 범위가 만약 -1000~1000 이고 최솟값을 구하라 라는 문제가 있습니다.

그렇다면 메인 로직은 ret = min(ret, value) 이런식으로 ret을 갱신해 나가는 것 일겁니다.

그렇다면 초기 ret은 어떻게 잡는게 좋을까요? 바로 1004 이런식으로 문제의 답의 범위 밖에서 잡는게 좋습니다.

그렇다면 최댓값을 구하라 라는 문제는 -1004를 기반으로 ret = max(ret, value)로 ret을 갱신해 나가야겠죠?
    */
}