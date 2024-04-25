﻿#pragma warning(disable:4996)
#include <bits/stdc++.h>
using namespace std;
#define prev aaa
#define next aaaa
#define y1 aaaaa



//https://www.acmicpc.net/problem/1987

/*
* 알파벳

세로 R칸 가로 C칸으로 된 표 모양의 보드.
보드의 각 칸에는 대문자 알파벳이 하나씩 적혀있고, 좌측상단(1,1)에는 말이 놓여있다.

말은 상하좌우 인접한 네 칸 중 한칸으로 이동할 수 있는데, 새로 이동한 칸에
적혀 있는 알파벳은 지금까지 지나온 모든 칸에 적혀 있는 알파벳과는 달라야 한다.
즉, 같은 알파벳이 적힌 칸을 두 번 지날 수 없다. ( 완탐 해야할듯 , 시간복잡도 3^26 )

좌측 상단에서 시작해서, 말이 최대한 몇 칸을 지날 수 있을지를 구하는 프로그램을
작성하시오 말이 지나는 칸은 좌측 상단의 칸도 포함된다.

*/

int r, c, ret, ny, nx, visited[30];
char a[21][21];

const int dy[4] = { -1,0,1,0 };
const int dx[4] = { 0,1,0,-1 };

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void go(int y, int x, int cnt) {
    ret = max(ret, cnt);
    for (int i = 0; i < 4; i++) {
        ny = y + dy[i];
        nx = x + dx[i];
        if (ny < 0 || nx < 0 || ny >= r || nx >= c)continue;

        int next = (int)(a[ny][nx] - 'A');

        if (visited[next] == 0) {
            visited[next] = 1;
            go(ny, nx, cnt + 1);
            visited[next] = 0;
        }
    }
    return;
}

int main() {
    fastIO();

    cin >> r >> c;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }
    visited[(int)a[0][0] - 'A'] = 1;
    go(0, 0, 1);
    cout << ret << '\n';
}
