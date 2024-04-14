﻿#include <bits/stdc++.h>
using namespace std;
#define prev aaa
#define next aaaa


// https://www.acmicpc.net/problem/13913

/*
* 숨바꼭질 4
*
수빈이는 현재 점 N(0 ≤ N ≤ 100,000)에 있고, 동생은 점 K(0 ≤ K ≤ 100,000)에
있다. 수빈이는 걷거나 순간이동을 할 수 있다.

만약, 수빈이의 위치가 X일 때 걷는다면 1초 후에 X-1 또는 X+1로 이동하게 된다.
순간이동을 하는 경우에는 1초 후에 2*X의 위치로 이동하게 된다.

수빈이와 동생의 위치가 주어졌을 때,
1. 수빈이가 동생을 찾을 수 있는 가장 빠른 시간이 몇 초후인지.
2. 가장빠른 방법으로 어떻게 이동해야 하는지 공백으로 구분해.
출력해라.
*/

const int max_n = 200004;
int visited[max_n], prev[max_n], n, k, ret, here, cnt, next;
vector<int> v;
queue<int> q;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}


int main() {
    fastIO();

    cin >> n >> k;
    visited[n] = 1;
    q.push(n);
    while (!q.empty()) {
        here = q.front();
        q.pop();
        if (here == k) {
            ret = visited[k];
            break;
        }
        for (int next : {here - 1, here + 1, here * 2}) {
            if (next >= max_n || next < 0 || visited[next]) continue;
            visited[next] = visited[here] + 1;
            prev[next] = here;
            q.push(next);
        }
    }

    for (int i = k; i != n; i = prev[i]) {
        v.push_back(i);
    }
    v.push_back(n);
    reverse(v.begin(), v.end());

    cout << ret - 1 << '\n';
    for (int i : v) cout << i << " ";

}
