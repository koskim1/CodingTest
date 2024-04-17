﻿#pragma warning(disable:4996)
#include <bits/stdc++.h>
using namespace std;
#define prev aaa
#define next aaaa
#define y1 aaaaa

//https://www.acmicpc.net/problem/14497

/*
* 주난의 난(難)
*
주난이가 점프하면 상하좌우 파동이 생김
파동은 사람을 찾을 때 까지 계속 퍼짐
0000
1111
000* 이렇게 있어도
좌로 간 파동이 거기에서 또 상하좌우 하는듯
초고바를 가진 학생(#) 을 찾는데 가장 빠른시간을 구하여라.
*/

const int dy[4] = { -1,0,1,0 };
const int dx[4] = { 0,1,0,-1 };
int n, m, x1, y1, x2, y2;
char a[301][301];
typedef pair<int, int> pii;
int visited[301][301];
int ret;
queue<int> q;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

/*
핵심이 되는 레벨링

무한while루프를 돌려서 0이 아닌것을 발견했을 때 temp 큐에 넣어주고

마지막에 q에 temp를 넣어줘서 다시 0이 아닌것을 발견할때까지 while문 돌리고

그에 인한 cnt값을 출력해주면 되는 문제였다.
*/

int main() {
    fastIO();

    scanf("%d %d", &n, &m);
    scanf("%d %d %d %d", &y1, &x1, &y2, &x2);
    y1--, x1--, y2--, x2--;
    for (int i = 0; i < n; i++) {
        scanf("%s", a[i]);
    }
    q.push(1000 * y1 + x1);
    visited[y1][x1] = 1;
    int cnt = 0;
    while (a[y2][x2] != '0') {
        cnt++;
        queue<int> temp;
        while (q.size()) {
            int y = q.front() / 1000;
            int x = q.front() % 1000;
            q.pop();
            for (int i = 0; i < 4; i++) {
                int ny = y + dy[i];
                int nx = x + dx[i];
                if (ny < 0 || ny >= n || nx < 0 || nx >= m || visited[ny][nx])continue;
                visited[ny][nx] = cnt;
                if (a[ny][nx] != '0') {
                    a[ny][nx] = '0';

                    temp.push(1000 * ny + nx);
                }
                else q.push(1000 * ny + nx);
            }
        }
        q = temp;
    }

    printf("%d\n", visited[y2][x2]);
}
