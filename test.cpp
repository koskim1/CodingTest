﻿#include <bits/stdc++.h>
using namespace std;
#define prev aaa
#define next aaaa


//https://www.acmicpc.net/problem/17071

/*
* 숨바꼭질 5 ( 최초 플래티넘 문제 )
*
수빈이는 현재 점 N(0 ≤ N ≤ 500,000)에 있고, 동생은 점 K(0 ≤ K ≤ 500,000)에
있다. 수빈이는 걷거나 순간이동을 할 수 있다.

만약, 수빈이의 위치가 X일 때 걷는다면 1초 후에 X-1 또는 X+1로 이동하게 된다.
순간이동을 하는 경우에는 1초 후에 2*X의 위치로 이동하게 된다.

동생은 걷기만 한다.동생은 항상 매 초마다 이동을 하며, 이동은 가속이 붙는다.
동생이 이동하는 거리는 이전에 이동한 거리보다 1을 더한 만큼 이동한다.
즉, 동생의 처음 위치는 K, 1초가 지난 후 위치는 K+1,
2초가 지난 후 위치는 K+1+2, 3초가 지난 후의 위치는 K+1+2+3이다.

수빈이와 동생의 위치가 주어졌을 때,
1. 수빈이가 동생을 찾을 수 있는 가장 빠른 시간이 몇 초후인지.
출력해라.
*/

const int max_n = 500000;
int visited[2][max_n + 4], a, b, ok, turn = 1;
// visited[2][max_n + 4] 0은 홀수 1은 짝수초 일때 가정.

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}


int main() {
    fastIO();

    cin >> a >> b;
    if (a == b) {
        cout << 0 << "\n";
        return 0;
    }

    queue<int> q;
    visited[0][a] = 1;
    q.push(a);
    while (q.size()) {
        b += turn;
        if (b > max_n)break;
        if (visited[turn % 2][b]) {
            ok = true;
            break;
        }
        int qSize = q.size();
        for (int i = 0; i < qSize; i++) {
            int x = q.front();
            q.pop();
            for (int nx : {x + 1, x - 1, x * 2}) {
                if (nx<0 || nx > max_n || visited[turn % 2][nx]) continue;
                visited[turn % 2][nx] = visited[(turn + 1) % 2][x] + 1;
                if (nx == b) {
                    ok = 1;
                    break;
                }
                q.push(nx);
            }
            if (ok)break;
        }
        if (ok)break;
        turn++;
    }
    if (ok) cout << turn << "\n";
    else cout << -1 << "\n";
    return 0;
}
