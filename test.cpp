﻿#pragma warning(disable:4996)
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

int n, cnt, sum;
string s;

int main() {
    fastIO();

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> s;

        for (int i = 0; i < s.size(); i++) {
            // O가 연속하면 +1 더해주는 코드            
            if (s[i] == 'O') cnt++;
            else cnt = 0;
            sum += cnt;
        }

        // 최종값 출력하고 초기화.
        cout << sum << '\n';
        sum = 0;
        cnt = 0;
    }

    /*
     규칙.
    1. O가 연속한다면 +1가중치만큼 계속 더해줌
    2. X를 만나면 가중치 초기화에 더하는거 없음
    3. 최종 더해진 값 출력.
     
     
    
    그냥 cnt하나로 다 해결됐다 나 뭐함 ㅋㅋ
    
    TC문제니 한TC끝내고 다시 초기화해주는게 중요하다는 기본기를 다시 배워갑니다,,,
    */


}
