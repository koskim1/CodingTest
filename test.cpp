﻿#pragma warning(disable:4996)
#include <bits/stdc++.h>
using namespace std;
#define prev aaa
#define next aaaa
#define y1 aaaaa

const int max_n = 1501;
const int dy[4] = { -1,0,1,0 };
const int dx[4] = { 0,1,0,-1 };
int visited_swan[max_n][max_n], visited[max_n][max_n], R, C,
day, swanY, swanX, y, x;
char a[max_n][max_n];
queue<pair<int, int>> waterQ, water_tempQ, swanQ, swan_tempQ;
string s;

//https://www.acmicpc.net/problem/3197

/*
* 백조의 호수

두마리의 백조(L)이 만나기 위해 빙판 X가 녹아야함.
매일 물 공간과 접촉한 빙판은 녹는다. 가로 세로방향으로만 녹음.
며칠이 지나야 백조들이 만날 수 있는 지 계산하는 프로그램을 작성해라.

1<=R,C<=1500.
r줄에는 길이 C의 문자열이 하나씩 주어진다.
'.'은 물공간, 'X'는 빙판 공간, 'L'은 백조가 있는 공간으로 나타낸다.

*/


void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void Qclear(queue<pair<int, int>>& q) {
    queue<pair<int, int>> empty;
    swap(q, empty);
}

void water_melting() {
    while (waterQ.size()) {
        tie(y, x) = waterQ.front();
        waterQ.pop();
        for (int i = 0; i < 4; i++) {
            int ny = y + dy[i];
            int nx = x + dx[i];
            if (ny < 0 || ny >= R || nx < 0 || nx >= C || visited[ny][nx])continue;
            if (a[ny][nx] == 'X') {
                visited[ny][nx] = 1;
                water_tempQ.push({ ny,nx });
                a[ny][nx] = '.';
            }
        }
    }
}

bool move_swan() {
    while (swanQ.size()) {
        tie(y, x) = swanQ.front();
        swanQ.pop();
        for (int i = 0; i < 4; i++) {
            int ny = y + dy[i];
            int nx = x + dx[i];
            if (ny < 0 || ny >= R || nx < 0 || nx >= C || visited_swan[ny][nx])continue;
            visited_swan[ny][nx] = 1;
            if (a[ny][nx] == '.')swanQ.push({ ny,nx });
            else if (a[ny][nx] == 'X') swan_tempQ.push({ ny,nx });
            else if (a[ny][nx] == 'L') return true;
        }
    }
    return false;
}

int main() {
    fastIO();

    cin >> R >> C;
    for (int i = 0; i < R; i++) {
        cin >> s;
        for (int j = 0; j < C; j++) {
            a[i][j] = s[j];
            if (a[i][j] == 'L') { swanY = i; swanX = j; }
            if (a[i][j] == '.' || a[i][j] == 'L') visited[i][j] = 1,
                waterQ.push({ i, j });
        }
    }

    swanQ.push({ swanY,swanX });
    visited_swan[swanY][swanX] = 1;

    while (true) {
        if (move_swan()) break;
        water_melting();
        waterQ = water_tempQ;
        swanQ = swan_tempQ;
        Qclear(water_tempQ);
        Qclear(swan_tempQ);
        day++;
    }
    cout << day << '\n';
}
