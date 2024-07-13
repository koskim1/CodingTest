#pragma warning(disable:4996)
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

/*
첫째 줄에 N과 M이 주어진다. N과 M은 8보다 크거나 같고, 50보다 작거나 같은 자연수이다. 
둘째 줄부터 N개의 줄에는 보드의 각 행의 상태가 주어진다. B는 검은색이며, W는 흰색이다.

전체 돌고 그냥 양옆 위 아래 안맞으면 체인지
*/

const int dy[4] = { -1,0,1,0 };
const int dx[4] = { 0,1,0,-1 };

string WB[8] = {
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW"
};

string BW[8] = {
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB"
};



int m, n, size[2], cnt, min_val = 12345;
string board[50];
pair<int, int> p1;


int WB_cnt(int x, int y) {
    int cnt = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (board[x + i][y + j] != WB[i][j])
                cnt++;
        }
    }
    return cnt;
}

int BW_cnt(int x, int y)
{
    int cnt = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (board[x + i][y + j] != BW[i][j])
                cnt++;
        }

    }
    return cnt;
}

int main() {
    fastIO();

    // idx번째 비트 XOR 연산
    // XOR은 같은것은 0으로 다른것만 1로 설정하는 성질이 있음
    int S = 18; // 10010
    int idx = 1;    // 첫번째 인덱스를 바꾸고싶으니 00001 << 1만큼 좌측으로 쉬프트 해주면 00010
                    // 10010 이랑 00010 이랑 XOR을 하면 10000 ( 2번째 인덱스는 1, 1로 같으니 0으로 처리)
    S ^= (1 << idx);
    cout << S << '\n';
}
